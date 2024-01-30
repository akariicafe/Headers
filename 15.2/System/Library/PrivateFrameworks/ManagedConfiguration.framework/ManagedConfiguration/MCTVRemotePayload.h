@class NSArray;

@interface MCTVRemotePayload : MCPayload

@property (readonly, nonatomic) NSArray *allowedTVIDs;
@property (readonly, nonatomic) NSArray *allowedTVNames;
@property (retain, nonatomic) NSArray *allowedRemotes;
@property (retain, nonatomic) NSArray *allowedTVs;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)restrictions;
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
