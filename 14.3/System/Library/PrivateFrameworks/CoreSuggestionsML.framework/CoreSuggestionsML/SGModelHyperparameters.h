@class NSString;

@interface SGModelHyperparameters : NSObject

@property (readonly, copy, nonatomic) NSString *featuresModelId;
@property (readonly, copy, nonatomic) NSString *featuresVersion;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterNGramRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tokenNGramRange;
@property (readonly, nonatomic) unsigned long long vectorLength;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)sessionDescriptorForLanguage:(id)a0;

@end
