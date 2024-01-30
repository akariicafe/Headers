@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppConfigurationManager:(id)a0;
- (void)fetchConfigWithCompletion:(id /* block */)a0;

@end
