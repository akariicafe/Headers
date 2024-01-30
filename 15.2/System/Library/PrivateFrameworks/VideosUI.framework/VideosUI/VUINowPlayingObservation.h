@class NSString;

@interface VUINowPlayingObservation : NSObject

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (copy, nonatomic) NSString *nowPlayingAppBundleIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 isPlaying:(BOOL)a1;

@end
