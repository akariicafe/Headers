@class NSString, PTCinematographyTrack;
@protocol NURenderStatistics;

@interface _PITapToTrackRenderResult : _NURenderResult <PITapToTrackResult>

@property (readonly, nonatomic) PTCinematographyTrack *completedTrack;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCompletedTrack:(id)a0;

@end
