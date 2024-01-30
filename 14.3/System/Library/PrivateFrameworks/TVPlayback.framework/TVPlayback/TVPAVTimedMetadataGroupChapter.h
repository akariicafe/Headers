@class AVMetadataItem;

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter

@property (retain, nonatomic) AVMetadataItem *imageMetadataItem;

- (void).cxx_destruct;
- (void)_loadChapterNameFromMetadataItem:(id)a0;
- (id)initWithAVTimedMetadataGroup:(id)a0 filterByLanguages:(id)a1;

@end
