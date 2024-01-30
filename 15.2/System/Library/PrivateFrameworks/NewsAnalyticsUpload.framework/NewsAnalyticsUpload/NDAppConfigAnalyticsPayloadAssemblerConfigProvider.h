@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (void).cxx_destruct;
- (id)init;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (id)initWithAppConfigurationManager:(id)a0;

@end
