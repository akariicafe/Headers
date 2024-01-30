@class MPCPlaybackEngine, MPCLyricsReportingController;

@interface _MPCReportingController : NSObject

@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (id)initWithPlaybackEngine:(id)a0;
- (void)recordLyricsViewEvent:(id)a0;
- (void).cxx_destruct;

@end
