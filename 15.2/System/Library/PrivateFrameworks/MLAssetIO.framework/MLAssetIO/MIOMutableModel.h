@class MIOModelDescription;

@interface MIOMutableModel : MIOModel

@property (copy, nonatomic) MIOModelDescription *modelDescription;

- (id)modelDescription;
- (void)setModelDescription:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
