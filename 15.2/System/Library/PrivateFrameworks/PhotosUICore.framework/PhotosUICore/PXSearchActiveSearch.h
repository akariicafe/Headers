@class NSString, NSArray;

@interface PXSearchActiveSearch : NSObject

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *searchTokens;
@property (retain, nonatomic) NSArray *representedObjects;
@property (retain, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) BOOL hasSearchText;
@property (readonly, nonatomic) BOOL hasSearchTokens;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long searchTokenCount;
@property (readonly, nonatomic) unsigned long long searchTermCount;
@property (readonly, nonatomic) NSString *searchTermsString;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSearchText:(id)a0 searchTokens:(id)a1;
- (void)_generateRelatedSearchObjects;

@end
