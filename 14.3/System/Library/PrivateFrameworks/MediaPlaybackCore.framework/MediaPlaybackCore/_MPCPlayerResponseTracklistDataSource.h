@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource>

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (id)initWithResponse:(id)a0 playingItemIndexPath:(id)a1;

@end
