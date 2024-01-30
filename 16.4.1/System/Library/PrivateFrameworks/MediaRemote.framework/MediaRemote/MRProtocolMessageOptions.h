@interface MRProtocolMessageOptions : NSObject

@property (nonatomic) long long priority;
@property (nonatomic, getter=isWaking) BOOL waking;

@end
