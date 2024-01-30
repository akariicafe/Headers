@class NSString, CLKComplicationDescriptor, NSArray, CLKWidgetComplicationDescriptor;

@interface NTKCompanionApricotComplicationRecord : NSObject

@property (retain, nonatomic) CLKComplicationDescriptor *complicationDescriptor;
@property (retain, nonatomic) CLKWidgetComplicationDescriptor *widgetDescriptor;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSArray *supportedClockKitFamilies;

- (void).cxx_destruct;

@end
