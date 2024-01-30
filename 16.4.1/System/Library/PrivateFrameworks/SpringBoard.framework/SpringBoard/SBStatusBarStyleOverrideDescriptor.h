@interface SBStatusBarStyleOverrideDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long overrides;
@property (readonly, nonatomic) int pid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOverrides:(unsigned long long)a0 pid:(int)a1;

@end
