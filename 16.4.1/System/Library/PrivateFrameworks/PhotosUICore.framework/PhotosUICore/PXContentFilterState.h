@class NSArray, NSString;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (class, readonly, nonatomic) PXContentFilterState *filterState;

@property (readonly, nonatomic) long long ruleCount;
@property (readonly, nonatomic) BOOL hasRules;
@property (nonatomic) BOOL includeSharedWithYou;
@property (nonatomic) BOOL saved;
@property (nonatomic) BOOL unsaved;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (nonatomic) BOOL showSharedLibraryDuplicates;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

+ (id)defaultFilterStateForContainerCollection:(id)a0;

- (BOOL)isContentFilterActive:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)predicateForUseCase:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
