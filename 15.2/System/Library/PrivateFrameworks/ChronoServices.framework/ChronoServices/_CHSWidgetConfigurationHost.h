@class NSString, NSArray;

@interface _CHSWidgetConfigurationHost : NSObject <CHSWidgetConfigurationHost> {
    NSString *_identifier;
    NSArray *_configurations;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
