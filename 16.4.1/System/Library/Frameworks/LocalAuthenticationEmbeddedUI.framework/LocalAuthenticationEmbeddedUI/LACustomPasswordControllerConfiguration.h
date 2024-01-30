@class NSString, LACustomPasswordControllerStyle;

@interface LACustomPasswordControllerConfiguration : NSObject {
    NSString *_prompt;
    NSString *_verifyPrompt;
    unsigned long long _mode;
}

@property (class, readonly) LACustomPasswordControllerConfiguration *registerCustomPasswordConfiguration;
@property (class, readonly) LACustomPasswordControllerConfiguration *enterCustomPasswordConfiguration;

@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (nonatomic) long long passwordType;
@property (retain, nonatomic) LACustomPasswordControllerStyle *style;

+ (id)enterCustomPasswordConfigurationWithPrompt:(id)a0;
+ (id)registerCustomPasswordControllerConfigurationWithPrompt:(id)a0 verifyPrompt:(id)a1;

- (unsigned long long)mode;
- (id)prompt;
- (void).cxx_destruct;
- (id)verifyPrompt;

@end
