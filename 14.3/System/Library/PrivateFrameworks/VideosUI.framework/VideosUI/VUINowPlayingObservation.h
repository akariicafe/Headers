@class NSString;

@interface VUINowPlayingObservation : NSObject

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (copy, nonatomic) NSString *nowPlayingAppBundleIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 isPlaying:(BOOL)a1;

@end
