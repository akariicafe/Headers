@class NSString, NTKComplication;
@protocol NTKTemplateComplicationDisplay;

@interface NTKDetachedComplicationHandlerDescriptor : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long family;
@property (retain, nonatomic) NTKComplication *complication;
@property (weak, nonatomic) id<NTKTemplateComplicationDisplay> display;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;

@end
