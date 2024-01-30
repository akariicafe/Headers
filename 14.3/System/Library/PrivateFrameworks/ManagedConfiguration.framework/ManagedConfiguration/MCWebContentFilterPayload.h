@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload

@property (copy, nonatomic) NSString *filterType;
@property (nonatomic) BOOL autoFilterEnabled;
@property (retain, nonatomic) NSArray *permittedURLStrings;
@property (retain, nonatomic) NSArray *whitelistedBookmarks;
@property (retain, nonatomic) NSArray *blacklistedURLStrings;
@property (retain, nonatomic) NSDictionary *pluginConfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pluginBundleID;
@property (nonatomic) BOOL filterBrowsers;
@property (nonatomic) BOOL filterSockets;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)pluginFilterKeysAndClasses;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)restrictions;
- (id)title;

@end
