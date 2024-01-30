@class NSString, NSDictionary, NSObject;
@protocol CCChartViewDelegate;

@interface CCChartViewSetupOptions : NSObject

@property (retain) NSString *config;
@property (retain) NSDictionary *configDictionary;
@property (retain) NSString *rendererType;
@property (retain) NSString *baseConfig;
@property (weak) NSObject<CCChartViewDelegate> *delegate;
@property (retain) NSDictionary *expressionFunctions;

- (void).cxx_destruct;

@end
