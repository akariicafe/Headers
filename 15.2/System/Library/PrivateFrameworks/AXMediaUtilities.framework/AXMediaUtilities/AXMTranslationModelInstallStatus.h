@class NSString;

@interface AXMTranslationModelInstallStatus : NSObject

@property (nonatomic) long long progress;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;

@end
