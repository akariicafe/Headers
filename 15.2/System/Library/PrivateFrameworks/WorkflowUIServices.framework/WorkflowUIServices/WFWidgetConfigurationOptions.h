@class NSString, INIntent;

@interface WFWidgetConfigurationOptions : NSObject

@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) NSString *widgetExtensionBundleIdentifier;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) long long family;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialConfigurationCardViewFrame;
@property (copy, nonatomic) NSString *widgetDisplayName;
@property (copy, nonatomic) NSString *widgetDescription;

- (void).cxx_destruct;
- (id)init;

@end
