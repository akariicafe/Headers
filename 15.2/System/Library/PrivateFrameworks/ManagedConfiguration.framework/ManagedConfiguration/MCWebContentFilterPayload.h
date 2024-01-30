@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload

@property (copy, nonatomic) NSString *filterType;
@property (nonatomic) BOOL autoFilterEnabled;
@property (retain, nonatomic) NSArray *permittedURLStrings;
@property (retain, nonatomic) NSArray *allowListBookmarks;
@property (retain, nonatomic) NSArray *denyListURLStrings;
@property (retain, nonatomic) NSDictionary *pluginConfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pluginBundleID;
@property (nonatomic) BOOL filterBrowsers;
@property (nonatomic) BOOL filterSockets;

+ (id)pluginFilterKeysAndClasses;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)restrictions;
- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
