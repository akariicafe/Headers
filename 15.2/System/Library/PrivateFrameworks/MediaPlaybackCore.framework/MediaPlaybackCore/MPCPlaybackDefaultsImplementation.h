@class MPPlaybackUserDefaults;

@interface MPCPlaybackDefaultsImplementation : NSObject <MFPlaybackDefaults>

@property (retain, nonatomic) MPPlaybackUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL shouldPreroll;

- (void).cxx_destruct;
- (id)initWithPlaybackUserDefaults:(id)a0;

@end
