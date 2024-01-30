@class TPSAssets, NSString, TPSWidgetContent, NSArray, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
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

+ (long long)contentTypeForDictionary:(id)a0;
+ (id)URLSchemeWithTipIdentifier:(id)a0 collectionIdentifier:(id)a1 referrer:(id)a2;
+ (id)tipIdFromDictionary:(id)a0;
+ (void)getValuesFromOpenURLSchemeQueryItems:(id)a0 tipIdentifier:(id *)a1 collectionIdentifier:(id *)a2 referrer:(id *)a3;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)actions;
- (id)title;
- (void).cxx_destruct;
- (id)shortTitle;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasImage;
- (BOOL)hasVideo;
- (id)bodyText;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)bodyContent;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1;
- (BOOL)hasWidgetContent;
- (id)fullContentAssets;
- (id)footnoteContent;
- (BOOL)containsLinks;
- (BOOL)textContainsHTML;
- (id)eyebrowText;
- (id)webURLPath;
- (id)shareText;
- (void)addCollectionIdentifier:(id)a0;
- (id)URLSchemeWithReferrer:(id)a0;

@end
