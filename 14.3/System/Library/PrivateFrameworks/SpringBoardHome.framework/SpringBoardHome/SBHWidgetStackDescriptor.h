@class NSArray, NSString, UIColor;

@interface SBHWidgetStackDescriptor : NSObject <SBHAddWidgetSheetGalleryItem>

@property (retain, nonatomic) NSArray *smallStackDescriptors;
@property (retain, nonatomic) NSArray *mediumStackDescriptors;
@property (retain, nonatomic) NSArray *largeStackDescriptors;
@property (readonly, copy, nonatomic) NSString *sbh_appName;
@property (readonly, copy, nonatomic) NSString *sbh_widgetName;
@property (readonly, nonatomic) unsigned long long sbh_supportedSizeClasses;
@property (readonly, copy, nonatomic) NSString *sbh_widgetDescription;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, copy, nonatomic) UIColor *accentColor;
@property (readonly, copy, nonatomic) UIColor *mostInterestingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
