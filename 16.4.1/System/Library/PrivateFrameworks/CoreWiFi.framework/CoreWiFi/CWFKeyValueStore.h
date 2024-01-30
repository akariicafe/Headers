@class NSString, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface CWFKeyValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSUbiquitousKeyValueStore *_ubiquitousKVS;
    int _unlockNotificationToken;
}

@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly) long long type;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ eventHandler;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllEntries;
- (BOOL)synchronize;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)objectForKey:(id)a0;
- (void)__ubiquitousKVSChanged:(id)a0;
- (id)__debugDescriptionForType:(long long)a0;
- (id)dictionaryRepresentation;
- (void)addEntriesFromDictionary:(id)a0;
- (void)activate;
- (BOOL)__synchronize;
- (void)invalidate;
- (void).cxx_destruct;

@end
