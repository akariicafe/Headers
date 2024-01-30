@class WFContentLocation, NSOrderedSet;

@interface WFContentItemPrivacyConfiguration : NSObject

@property (readonly, nonatomic) WFContentLocation *origin;
@property (nonatomic) unsigned long long disclosureLevel;
@property (readonly, nonatomic) NSOrderedSet *disclosureWarnings;

+ (id)configurationWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)configurationWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 disclosureWarnings:(id)a2;

- (void).cxx_destruct;
- (id)initWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 disclosureWarnings:(id)a2;

@end
