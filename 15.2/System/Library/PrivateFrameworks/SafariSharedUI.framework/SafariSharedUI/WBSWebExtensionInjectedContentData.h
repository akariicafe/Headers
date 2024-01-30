@class NSArray, NSSet;

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
@property (readonly, nonatomic) long long injectionTime;
@property (readonly, nonatomic) BOOL matchesAboutBlank;
@property (readonly, nonatomic) BOOL injectsIntoAllFrames;

+ (id)supportedInjectedContentFeatures;

- (void).cxx_destruct;
- (BOOL)_parseManifestDictionary:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
- (id)initWithManifestDictionary:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;

@end
