@class GKCollectionViewDataSource, NSMutableDictionary, NSString;

@interface GKAggregateMapping : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *globalToLocalSections;
@property (retain, nonatomic) NSMutableDictionary *localToGlobalSections;
@property (retain, nonatomic) NSMutableDictionary *globalSectionsToTags;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionCount;
@property (retain, nonatomic) NSString *dynamicTag;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)localSectionForGlobalSection:(unsigned long long)a0;
- (unsigned long long)globalSectionForLocalSection:(unsigned long long)a0;
- (id)initWithGlobalToLocalMapping:(id)a0;
- (void)addMappingFromGlobalSection:(unsigned long long)a0 toLocalSection:(unsigned long long)a1 withTag:(id)a2;
- (id)localIndexPathForGlobalIndexPath:(id)a0;
- (id)globalIndexPathForLocalIndexPath:(id)a0;
- (id)tagForGlobalSection:(long long)a0;
- (unsigned long long)updateMappingsStartingWithGlobalSection:(unsigned long long)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;

@end
