@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)initWithAppConfigurationManager:(id)a0;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
