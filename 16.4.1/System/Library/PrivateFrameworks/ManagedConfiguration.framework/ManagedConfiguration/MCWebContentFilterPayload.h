@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload

@property (copy, nonatomic) NSString *filterType;
@property (retain, nonatomic) NSString *contentFilterUUID;
@property (nonatomic) BOOL autoFilterEnabled;
@property (retain, nonatomic) NSArray *permittedURLStrings;
@property (retain, nonatomic) NSArray *allowListBookmarks;
@property (retain, nonatomic) NSArray *denyListURLStrings;
@property (retain, nonatomic) NSDictionary *pluginConfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pluginBundleID;
@property (nonatomic) BOOL filterBrowsers;
@property (nonatomic) BOOL filterSockets;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)pluginFilterKeysAndClasses;

- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)restrictions;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
