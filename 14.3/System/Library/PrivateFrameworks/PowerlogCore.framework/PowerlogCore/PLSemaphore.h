@class NSString, NSMutableSet, NSCondition;

@interface PLSemaphore : NSObject

@property (retain) NSCondition *pendingObjectsLock;
@property double timeout;
@property (retain) NSMutableSet *interestedObjects;
@property (retain) NSMutableSet *pendingDoneObjects;
@property (retain) NSString *key;
@property (readonly) BOOL isActive;

+ (id)sharedSemaphoreForKey:(id)a0;

- (void)signalDoneByObject:(id)a0;
- (void)waitWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitWithBlockSync:(id /* block */)a0;
- (void)signalStartListening;
- (id)initWithKey:(id)a0;
- (void)signalNonInterestByObject:(id)a0;
- (void)signalInterestByObject:(id)a0;

@end
