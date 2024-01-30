@class AFExperiment, NSDictionary, NSError, NSDate;

@interface AFEnablementConfigurationProviderParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long enablementFlow;
@property (readonly, nonatomic) BOOL newUser;
@property (readonly, copy, nonatomic) NSError *userStatusFetchError;
@property (readonly, copy, nonatomic) NSDate *dateStartedResolvingUserStatus;
@property (readonly, copy, nonatomic) NSDate *dateEndedResolvingUserStatus;
@property (readonly, copy, nonatomic) AFExperiment *experiment;
@property (readonly, copy, nonatomic) NSError *experimentFetchError;
@property (readonly, copy, nonatomic) NSDate *dateStartedResolvingExperiment;
@property (readonly, copy, nonatomic) NSDate *dateEndedResolvingExperiment;
@property (readonly, copy, nonatomic) NSDictionary *outputVoiceCountForRecognitionLanguage;
@property (readonly, nonatomic) BOOL recognitionLanguageWithMultipleOutputVoicesExists;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithEnablementFlow:(long long)a0 newUser:(BOOL)a1 userStatusFetchError:(id)a2 dateStartedResolvingUserStatus:(id)a3 dateEndedResolvingUserStatus:(id)a4 experiment:(id)a5 experimentFetchError:(id)a6 dateStartedResolvingExperiment:(id)a7 dateEndedResolvingExperiment:(id)a8 outputVoiceCountForRecognitionLanguage:(id)a9 recognitionLanguageWithMultipleOutputVoicesExists:(BOOL)a10;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
