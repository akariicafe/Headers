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
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;

+ (id)collectionIdentifierForDictionary:(id)a0;
+ (id)tipIdentifiersForDictionary:(id)a0;
+ (id)classSet;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)text;
- (long long)priority;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1;
- (id)tileAssets;
- (id)featuredTitle;
- (id)featuredAssets;
- (id)title;
- (void)encodeWithCoder:(id)a0;

@end
