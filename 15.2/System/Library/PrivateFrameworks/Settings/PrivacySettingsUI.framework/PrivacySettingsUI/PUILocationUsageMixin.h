@class UIImageView, NSString;

@interface PUILocationUsageMixin : NSObject

@property (nonatomic) int usage;
@property (nonatomic) unsigned long long authLevel;
@property (readonly, nonatomic) UIImageView *usageIndicator;
@property (readonly, nonatomic) NSString *authLevelString;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })usageIndicatorSize;
- (id)iconForUsage:(int)a0;
- (id)_authLevelForMask:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_authLevelLabelSize:(unsigned long long)a0;

@end
