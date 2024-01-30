@class NSString, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ATService : NSObject <ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableSet *messageLinks;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)run;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)stop;
- (void)addObserver:(id)a0;
- (void)addMessageLink:(id)a0;
- (id)messageLinkForIdentifier:(id)a0;
- (void)removeMessageLink:(id)a0;

@end
