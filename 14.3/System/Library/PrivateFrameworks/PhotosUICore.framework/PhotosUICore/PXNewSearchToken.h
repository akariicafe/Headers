@class NSString, UIImage, PSIQueryToken, NSAttributedString;

@interface PXNewSearchToken : NSObject

@property (readonly, nonatomic) BOOL isPersistable;
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

- (id)init;
- (BOOL)isSocialGroup;
- (void).cxx_destruct;
- (id)initWithAttributedTitle:(id)a0 queryToken:(id)a1 priorityAssetUUID:(id)a2;
- (BOOL)isUnnamedPerson;
- (BOOL)isEqualToToken:(id)a0;
- (id)_iconForSearchUserCategory:(unsigned long long)a0;
- (id)_imagewithSymbolName:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 queryToken:(id)a1 priorityAssetUUID:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
