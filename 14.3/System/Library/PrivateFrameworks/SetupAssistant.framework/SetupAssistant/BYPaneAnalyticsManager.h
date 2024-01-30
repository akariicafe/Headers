@interface BYPaneAnalyticsManager : NSObject

+ (id)nameForPane:(long long)a0;
+ (void)recordAction:(BOOL)a0 forPane:(long long)a1;
+ (void)clearActionForPane:(long long)a0;

@end
