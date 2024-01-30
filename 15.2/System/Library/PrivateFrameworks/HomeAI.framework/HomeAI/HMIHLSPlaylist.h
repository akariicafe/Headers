@class NSString, NSMutableArray;

@interface HMIHLSPlaylist : HMFObject <HMFLogging>

@property (readonly) NSMutableArray *lines;
@property (readonly) NSString *playlistString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)end;
- (void)open;
- (void).cxx_destruct;
- (void)appendSeparableSegmentWithPath:(id)a0 duration:(double)a1 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithPlaylistString:(id)a0;
- (id)initWithTargetDuration:(double)a0;
- (void)appendIFrameOnly;
- (void)appendEncryptionModeWithPath:(id)a0;
- (void)appendInitializationSegmentWithPath:(id)a0;
- (void)appendSeparableSegmentWithPath:(id)a0 duration:(double)a1;

@end
