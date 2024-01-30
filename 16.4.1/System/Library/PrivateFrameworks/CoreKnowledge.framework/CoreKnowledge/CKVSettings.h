@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding> {
    _Atomic unsigned char _enablementOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (BOOL)_isDonationEnabled:(unsigned char)a0;
+ (BOOL)_isSandboxEnabled:(unsigned char)a0;
+ (BOOL)_isSpeechProfileEnabled:(unsigned char)a0;
+ (unsigned char)defaultEnablementOptions;
+ (id)defaultSandboxSettings;
+ (BOOL)isDonationEnabled:(unsigned char)a0;
+ (BOOL)isSkitEnabled:(unsigned char)a0;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;

- (BOOL)isEvaluationEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalization:(id)a0 enablementOptions:(unsigned char)a1;
- (id)initWithCoder:(id)a0;
- (unsigned char)enablementOptions;
- (BOOL)isSkitEnabled;
- (BOOL)isSpeechProfileEnabledForAssistant;
- (void)setEvaluationEnabled:(BOOL)a0;
- (BOOL)shouldOverrideSpeechProfileDeferral;
- (BOOL)isXPCDonationEnabled:(long long)a0;
- (BOOL)isSandboxEnabled;
- (id)init;
- (BOOL)isSpeechProfileEnabled;
- (void)refreshEnablementOptions;
- (BOOL)isTaskEnabled:(unsigned short)a0 isAdmin:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshLocalization;
- (BOOL)isSpeechProfileEnabledForDictation;

@end
