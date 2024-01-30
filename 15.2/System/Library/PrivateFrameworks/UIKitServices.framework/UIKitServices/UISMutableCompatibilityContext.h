@class NSArray;

@interface UISMutableCompatibilityContext : UISCompatibilityContext

@property (retain, nonatomic) NSArray *supportedDisplaySizes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSupportedDisplaySizes:(id)a0;

@end
