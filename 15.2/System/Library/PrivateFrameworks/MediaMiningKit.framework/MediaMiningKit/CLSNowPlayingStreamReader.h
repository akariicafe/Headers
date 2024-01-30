@interface CLSNowPlayingStreamReader : NSObject

@property (nonatomic) unsigned long long conversionOptions;

- (id)init;
- (void)enumerateSessionsWithBlock:(id /* block */)a0;

@end
