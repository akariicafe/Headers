@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL fromUserPowerDown;

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
