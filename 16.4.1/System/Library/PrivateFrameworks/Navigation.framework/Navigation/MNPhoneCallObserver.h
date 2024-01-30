@interface MNPhoneCallObserver : NSObject

+ (id)sharedPhoneCallObserver;

- (BOOL)hasActiveCalls;

@end
