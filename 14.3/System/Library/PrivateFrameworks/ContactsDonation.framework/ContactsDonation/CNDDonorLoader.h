@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)extensionAttributes;
+ (id)currentExtensionsObservable;
+ (id)continuousExtensionsObservable;

- (id)init;
- (void).cxx_destruct;
- (id)donorWithIdentifier:(id)a0;

@end
