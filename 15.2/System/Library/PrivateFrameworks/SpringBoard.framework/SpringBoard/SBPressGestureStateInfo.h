@interface SBPressGestureStateInfo : NSObject

@property (nonatomic) long long state;
@property (nonatomic) BOOL isCoalescing;
@property (nonatomic) double expirationTime;
@property (nonatomic) long long stateUponExpiration;

- (id)init;

@end
