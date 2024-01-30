@class CDMDynamicConfig;

@interface CDMSetupRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;

+ (id)setupWithLanguageCode:(id)a0;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithDynamicConfig:(id)a0;

@end
