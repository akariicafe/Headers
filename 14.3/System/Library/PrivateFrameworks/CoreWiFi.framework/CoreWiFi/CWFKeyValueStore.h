@class NSString, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface CWFKeyValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSUbiquitousKeyValueStore *_ubiquitousKVS;
}

@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly) long long type;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ eventHandler;

- (void)removeAllEntries;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (BOOL)synchronize;
- (void)activate;
- (void)__ubiquitousKVSChanged:(id)a0;
- (id)dictionaryRepresentation;
- (id)__debugDescriptionForType:(long long)a0;
- (BOOL)__synchronize;
- (void)invalidate;

@end
