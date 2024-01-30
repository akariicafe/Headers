@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateIfNecessary;
- (void)_mediaServicesReset:(id)a0;

@end
