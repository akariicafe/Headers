@class NSArray, NSSet, NSMutableSet, NSString;

@interface WBSWebExtensionInjectedContentData : NSObject

@property (readonly, nonatomic) NSArray *scriptPaths;
@property (readonly, nonatomic) NSArray *styleSheetPaths;
@property (copy, nonatomic) NSArray *scriptContents;
@property (copy, nonatomic) NSArray *styleSheetContents;
@property (readonly, nonatomic) NSSet *includeMatchPatterns;
@property (readonly, nonatomic) NSSet *excludeMatchPatterns;
@property (readonly, nonatomic) NSArray *includeMatchPatternStrings;
@property (readonly, nonatomic) NSArray *excludeMatchPatternStrings;
@property (readonly, nonatomic) NSArray *includeGlobPatternStrings;
@property (readonly, nonatomic) NSArray *excludeGlobPatternStrings;
@property (readonly, copy, nonatomic) NSMutableSet *userScripts;
@property (readonly, copy, nonatomic) NSMutableSet *userStyleSheets;
@property (readonly, nonatomic) long long injectionTime;
@property (readonly, nonatomic) BOOL matchesAboutBlank;
@property (readonly, nonatomic) BOOL injectsIntoAllFrames;
@property (readonly, nonatomic) BOOL isForMainWorld;
@property (readonly, nonatomic) BOOL persistAcrossLaunchesOfSafari;
@property (readonly, copy, nonatomic) NSString *contentScriptID;
@property (readonly, copy, nonatomic) NSArray *unexpandedIncludeMatchPatternStrings;
@property (readonly, copy, nonatomic) NSArray *unexpandedExcludeMatchPatternStrings;

+ (id)supportedInjectedContentFeatures;

- (void).cxx_destruct;
- (BOOL)_parseDictionaryContainingContentScriptDetails:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
- (void)_validateExtensionResources:(id)a0 forExtensionWithIdentifier:(id)a1 errorMessage:(id *)a2;
- (void)addWKUserScript:(id)a0;
- (void)addWKUserStyleSheet:(id)a0;
- (id)initWithManifestDictionary:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
- (id)initWithPersistentContentScriptDetails:(id)a0 extensionIdentifier:(id)a1 errorMessage:(id *)a2;
- (void)removeWKUserScripts;
- (void)removeWKUserStyleSheets;

@end
