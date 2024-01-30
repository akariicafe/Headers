@class NSRegularExpression;

@interface WBSPhishingConfigurationOverride : NSObject

@property (readonly, nonatomic) NSRegularExpression *expression;
@property (readonly, nonatomic) unsigned long long classification;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)initWithExpression:(id)a0 classification:(id)a1 error:(id *)a2;

@end
