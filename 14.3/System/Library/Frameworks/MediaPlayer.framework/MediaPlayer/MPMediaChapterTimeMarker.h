@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker

@property (nonatomic) unsigned long long chapterIndex;
@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) BOOL hasArtworkAtPlaybackTime;

- (void).cxx_destruct;

@end
