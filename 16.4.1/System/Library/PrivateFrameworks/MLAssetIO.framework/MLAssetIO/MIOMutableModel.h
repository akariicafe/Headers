@class MIOModelDescription;

@interface MIOMutableModel : MIOModel

@property (copy, nonatomic) MIOModelDescription *modelDescription;

- (id)modelDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setModelDescription:(id)a0;

@end
