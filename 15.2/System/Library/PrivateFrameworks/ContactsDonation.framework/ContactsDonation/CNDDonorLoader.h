@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)extensionAttributes;
+ (id)currentExtensionsObservable;
+ (id)continuousExtensionsObservable;

- (void).cxx_destruct;
- (id)init;
- (id)donorWithIdentifier:(id)a0;

@end
