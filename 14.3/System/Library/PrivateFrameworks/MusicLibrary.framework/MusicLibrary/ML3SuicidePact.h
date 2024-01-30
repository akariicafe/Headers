@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ML3SuicidePact : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (readonly, nonatomic) BOOL isSigned;

+ (id)sharedPact;

- (void)signForReason:(long long)a0;
- (id)init;
- (BOOL)isSignedForReason:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (void)_carryOutSuicidePact;
- (void)secedeForReason:(long long)a0;

@end
