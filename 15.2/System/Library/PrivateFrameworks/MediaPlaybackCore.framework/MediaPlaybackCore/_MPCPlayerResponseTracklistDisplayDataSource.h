@class NSArray, NSDictionary, NSString, MPSectionedCollection, NSIndexPath;

@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject <MPLazySectionedCollectionDataSource>

@property (readonly, nonatomic) MPSectionedCollection *items;
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (id)displayIndexPathForStructuredIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)structuredIndexPathForDisplayIndexPath:(id)a0;
- (id)initWithTracklistItems:(id)a0 playingItemIndexPath:(id)a1;
- (void).cxx_destruct;

@end
