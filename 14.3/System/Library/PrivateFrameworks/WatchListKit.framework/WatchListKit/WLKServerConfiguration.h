@interface WLKServerConfiguration : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)fetchConfiguration:(id /* block */)a0;

@end
