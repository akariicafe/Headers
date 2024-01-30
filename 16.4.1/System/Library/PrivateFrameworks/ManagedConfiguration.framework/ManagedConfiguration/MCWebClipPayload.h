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

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
