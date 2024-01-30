@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource

@property (readonly, nonatomic) BOOL iTunesMatchEnabled;

+ (id)sharedInstance;

- (void)determineiTunesMatchEnabledWithCompletion:(id /* block */)a0;

@end
