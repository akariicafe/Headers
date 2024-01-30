@class NSString;

@interface QLWaveformScrubberViewProvider : NSObject <PHVideoScrubberFilmstripViewProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)generateWaveformForWidth:(double)a0 asset:(id)a1 updateHandler:(id /* block */)a2;

- (id)createFilmstripViewForVideoScrubberView:(id)a0;

@end
