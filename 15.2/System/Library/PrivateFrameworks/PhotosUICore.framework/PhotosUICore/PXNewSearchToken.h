@class NSString, UIImage, PSIQueryToken, NSAttributedString;

@interface PXNewSearchToken : NSObject

@property (readonly, nonatomic) BOOL isPersistable;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) PSIQueryToken *queryToken;
@property (readonly, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) BOOL hasLeadingHashtag;

+ (id)px_searchTokenForHashtag:(id)a0;
+ (id)px_oneYearAgoSearchToken;
+ (id)px_searchTokensFromSiriSearchRequest:(id)a0;
+ (id)unnamedPersonDisplayText;
+ (id)socialGroupDisplayText;
+ (unsigned long long)_searchUserCategoryForSearchTokenCategory:(unsigned long long)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithSearchText:(id)a0 searchCategory:(unsigned long long)a1;
- (id)initWithTitle:(id)a0 queryToken:(id)a1 type:(unsigned long long)a2 priorityAssetUUID:(id)a3;
- (id)initWithAttributedTitle:(id)a0 queryToken:(id)a1 type:(unsigned long long)a2 priorityAssetUUID:(id)a3;
- (BOOL)isUnnamedPerson;
- (BOOL)isSocialGroup;
- (BOOL)isEqualToToken:(id)a0;
- (id)_iconForSearchUserCategory:(unsigned long long)a0;
- (id)_imagewithSymbolName:(id)a0;

@end
