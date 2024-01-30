@class PSIDateFilter, NSString, NSArray, NSMutableArray;

@interface PSIGroupResultGroupSnapshot : NSObject

@property (readonly, copy, nonatomic) NSString *contentString;
@property (readonly, copy, nonatomic) NSString *normalizedString;
@property (readonly, copy, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) NSMutableArray *tokens;
@property (readonly, nonatomic) NSMutableArray *matchRanges;
@property (readonly, nonatomic) NSArray *groupRanges;
@property (readonly, copy, nonatomic) PSIDateFilter *dateFilter;
@property (readonly, nonatomic) NSArray *datedTokens;
@property (readonly, nonatomic) short category;
@property (readonly, nonatomic) unsigned long long groupId;
@property (readonly, nonatomic) unsigned long long owningGroupId;

- (void)addToken:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateFilter:(id)a0 datedTokens:(id)a1;
- (void)addMatchRange:(id)a0;
- (id)initWithContentString:(id)a0 lookupIdentifier:(id)a1 category:(short)a2;
- (id)initWithContentString:(id)a0 normalizedString:(id)a1 token:(id)a2 category:(short)a3 lookupIdentifier:(id)a4 dateFilter:(id)a5 groupId:(unsigned long long)a6 owningGroupId:(unsigned long long)a7 groupRanges:(id)a8 datedTokens:(id)a9;
- (id)initWithGroup:(id)a0 token:(id)a1;
- (BOOL)isDateFilterFromFullSearchText;
- (BOOL)isDateFilterFromImplicitToken;
- (BOOL)isDateFilterPartiallyFromFullSearchText;

@end
