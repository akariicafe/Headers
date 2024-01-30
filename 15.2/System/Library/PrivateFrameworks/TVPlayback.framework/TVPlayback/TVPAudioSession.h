@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_mediaServicesReset:(id)a0;
- (void)_updateIfNecessary;

@end
