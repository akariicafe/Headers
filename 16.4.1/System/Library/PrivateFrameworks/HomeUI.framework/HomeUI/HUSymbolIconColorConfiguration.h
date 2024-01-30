@class UIColor, NSString;

@interface HUSymbolIconColorConfiguration : NSObject <HUSymbolIconColorConfiguration>

@property (retain, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *activeIconColor;
@property (readonly, nonatomic) UIColor *inactiveIconColor;
@property (readonly, nonatomic) UIColor *disabledIconColor;
@property (readonly, nonatomic) UIColor *iconColorInDescriptiveView;
@property (readonly, nonatomic) UIColor *activeIconBackgroundColor;
@property (readonly, nonatomic) UIColor *inactiveIconBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledIconBackgroundColor;
@property (readonly, nonatomic) UIColor *iconBackgroundColorInDescriptiveView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconColorConfigurationForItem:(id)a0;
+ (id)iconColorConfigurationForSymbolIconAccessoryType:(id)a0;
+ (id)iconColorConfigurationForSymbolIconIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithPrimaryColor:(id)a0;

@end
