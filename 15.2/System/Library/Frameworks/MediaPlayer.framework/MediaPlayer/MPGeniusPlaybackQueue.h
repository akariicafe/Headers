@class NSURL;

@interface MPGeniusPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSURL *seedTrack;

+ (BOOL)supportsSecureCoding;

- (id)description;

@end
