@class NSArray;

@interface MCAirPlayPayload : MCPayload

@property (retain, nonatomic) NSArray *titlesAndDescriptions;
@property (retain, nonatomic) NSArray *allowListDestinations;
@property (retain, nonatomic) NSArray *destinationsWithPasswords;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)verboseDescription;

@end
