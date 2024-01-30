@class NSString;

@interface SGModelHyperparameters : NSObject

@property (readonly, copy, nonatomic) NSString *featuresModelId;
@property (readonly, copy, nonatomic) NSString *featuresVersion;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterNGramRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tokenNGramRange;
@property (readonly, nonatomic) unsigned long long vectorLength;
@property (readonly, nonatomic) unsigned long long idVectorLength;
@property (readonly, nonatomic) unsigned long long extraIdOptions;
@property (readonly, nonatomic) unsigned long long vectorizerStrategy;
@property (readonly, nonatomic) long long vectorNormalization;

+ (unsigned long long)strategyForString:(id)a0 modelTypeName:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 modelTypeName:(id)a1;
- (id)sessionDescriptorForLanguage:(id)a0;

@end
