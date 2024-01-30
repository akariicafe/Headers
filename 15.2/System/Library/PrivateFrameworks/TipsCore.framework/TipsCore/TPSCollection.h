@class NSString, NSArray, TPSContent, TPSTileContent, TPSAssets;

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countText;
@property (copy, nonatomic) TPSContent *featuredContent;
@property (copy, nonatomic) TPSTileContent *tileContent;
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured;
@property (nonatomic) BOOL containsIntroTip;
@property (copy, nonatomic) NSArray *tipIdentifiers;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *featuredTitle;
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;

+ (id)na_identity;
+ (id)collectionIdentifierForDictionary:(id)a0;
+ (id)tipIdentifiersForDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)priority;
- (id)initWithCoder:(id)a0;
- (id)text;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1;
- (id)tileAssets;
- (id)featuredTitle;
- (id)featuredAssets;

@end
