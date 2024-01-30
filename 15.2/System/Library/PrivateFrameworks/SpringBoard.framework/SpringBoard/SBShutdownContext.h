@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL fromUserPowerDown;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReason:(id)a0;

@end
