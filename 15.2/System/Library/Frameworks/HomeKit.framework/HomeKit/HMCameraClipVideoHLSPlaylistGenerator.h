@class NSURL, NSMutableString, NSData;

@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject

@property (readonly) NSMutableString *hlsPlaylistString;
@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSData *hlsPlaylist;

+ (id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)a0;

- (void)finish;
- (void).cxx_destruct;
- (void)addSegment:(id)a0;
- (void)addSegments:(id)a0;
- (id)initWithClip:(id)a0 url:(id)a1;

@end
