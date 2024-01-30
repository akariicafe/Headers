@class NSArray, NSString;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSString *localizedDescriptionForFilters;
@property (readonly, nonatomic) NSString *localizedFooterDescriptionForFilters;
@property (readonly, nonatomic) BOOL hasRules;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

- (id)predicateForUseCase:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)ruleCount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isFilterActive:(long long)a0;

@end
