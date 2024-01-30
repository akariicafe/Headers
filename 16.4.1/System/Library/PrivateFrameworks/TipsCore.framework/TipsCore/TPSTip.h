@class TPSAssets, NSString, NSArray, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) NSString *linkedDocumentId;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)tipIdFromDictionary:(id)a0;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (id)na_identity;
+ (long long)contentTypeForDictionary:(id)a0;

- (id)bodyContent;
- (BOOL)isSoftwareWelcome;
- (id)shareText;
- (BOOL)hasImage;
- (id)URLWithReferrer:(id)a0;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (BOOL)isHardwareWelcome;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)footnoteContent;
- (id)actions;
- (id)initWithCoder:(id)a0;
- (id)bodyText;
- (void)addCollectionIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsLinks;
- (void)removeCollectionIdentifier:(id)a0;
- (id)summary;
- (id)fullContentAssets;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)textContainsHTML;
- (unsigned long long)hash;
- (id)shortTitle;
- (id)title;
- (id)eyebrowText;
- (BOOL)hasVideo;
- (id)webURLPath;
- (void).cxx_destruct;

@end
