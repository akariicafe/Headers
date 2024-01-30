@class NSArray;

@interface MCTVRemotePayload : MCPayload

@property (readonly, nonatomic) NSArray *allowedTVIDs;
@property (readonly, nonatomic) NSArray *allowedTVNames;
@property (retain, nonatomic) NSArray *allowedRemotes;
@property (retain, nonatomic) NSArray *allowedTVs;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)restrictions;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
