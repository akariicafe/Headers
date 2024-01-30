@class NSArray;

@interface MCAirPlayPayload : MCPayload

@property (retain, nonatomic) NSArray *titlesAndDescriptions;
@property (retain, nonatomic) NSArray *whitelistDestinations;
@property (retain, nonatomic) NSArray *destinationsWithPasswords;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
