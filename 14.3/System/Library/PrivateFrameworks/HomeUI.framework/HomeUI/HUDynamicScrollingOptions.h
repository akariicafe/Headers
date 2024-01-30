@interface HUDynamicScrollingOptions : NSObject

@property (readonly, nonatomic) long long viewSizeSubclass;
@property (nonatomic) struct { double minScrollPercentage; double maxScrollPercentage; double maxValue; } textScaleSetting;

+ (id)defaultOptionsForViewSizeSubclass:(long long)a0 showsStatusSection:(BOOL)a1;
+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)a0;
+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewSizeSubclass:(long long)a0;

@end
