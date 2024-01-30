@class NSString, NSURL, NSData, NSNumber;

@interface MCWebClipPayload : MCPayload

@property (readonly, nonatomic) NSNumber *isRemovableNum;
@property (readonly, nonatomic) NSNumber *precomposedNum;
@property (readonly, nonatomic) NSNumber *fullScreenNum;
@property (readonly, nonatomic) NSNumber *ignoreManifestScopeNum;
@property (readonly, retain, nonatomic) NSURL *URL;
@property (readonly, retain, nonatomic) NSString *label;
@property (readonly, retain, nonatomic) NSData *iconData;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, nonatomic) BOOL precomposed;
@property (readonly, nonatomic) BOOL fullScreen;
@property (readonly, nonatomic) BOOL ignoreManifestScope;
@property (readonly, nonatomic) NSString *contentMode;
@property (retain, nonatomic) NSString *targetApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *savedIdentifier;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
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
