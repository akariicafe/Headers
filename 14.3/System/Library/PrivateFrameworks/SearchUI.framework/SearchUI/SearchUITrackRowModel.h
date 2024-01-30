@class SFTrack, SearchUITrackLayoutManager;

@interface SearchUITrackRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUITrackLayoutManager *trackLayoutManager;
@property (retain, nonatomic) SFTrack *track;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 trackManager:(id)a1 cardSection:(id)a2 track:(id)a3 queryId:(unsigned long long)a4;

@end
