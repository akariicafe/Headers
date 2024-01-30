@class NSArray, TPSWidgetContent, TPSAssets, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) TPSActionableContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) TPSWidgetContent *widgetContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (readonly, nonatomic, getter=isWelcome) BOOL welcome;
@property (readonly, nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly, nonatomic, getter=isSoftwareWelcome) BOOL softwareWelcome;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)tipIdFromDictionary:(id)a0;
+ (id)classSet;
+ (id)URLSchemeWithTipIdentifier:(id)a0 collectionIdentifier:(id)a1 referrer:(id)a2;
+ (long long)contentTypeForDictionary:(id)a0;
+ (void)getValuesFromOpenURLSchemeQueryItems:(id)a0 tipIdentifier:(id *)a1 collectionIdentifier:(id *)a2 referrer:(id *)a3;

- (id)summary;
- (id)actions;
- (id)fullContentAssets;
- (id)bodyContent;
- (BOOL)containsLinks;
- (BOOL)textContainsHTML;
- (id)webURLPath;
- (id)shareText;
- (id)bodyText;
- (BOOL)hasWidgetContent;
- (void)addCollectionIdentifier:(id)a0;
- (id)URLSchemeWithReferrer:(id)a0;
- (BOOL)hasImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasVideo;
- (id)initWithCoder:(id)a0;
- (id)shortTitle;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1;
- (id)title;
- (void)encodeWithCoder:(id)a0;

@end
