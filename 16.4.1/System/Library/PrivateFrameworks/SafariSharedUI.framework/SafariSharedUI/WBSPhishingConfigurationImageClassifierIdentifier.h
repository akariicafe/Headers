@class NSString;

@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject

@property (readonly, copy, nonatomic) NSString *domainName;
@property (readonly, nonatomic) float minimumConfidence;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 minimumConfidence:(float)a1;

@end
