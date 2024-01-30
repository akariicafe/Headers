@interface DNDSModeDetails : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long interruptionSuppression;

+ (id)detailsForInactiveDoNotDisturb;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)restrictedDetailsWithDetails:(id)a0;
- (id)initWithInterruptionSuppression:(unsigned long long)a0;

@end
