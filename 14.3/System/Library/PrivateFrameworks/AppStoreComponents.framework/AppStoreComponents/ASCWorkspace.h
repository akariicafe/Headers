@interface ASCWorkspace : NSObject

@property (class, readonly) ASCWorkspace *sharedWorkspace;

@property (readonly, nonatomic, getter=isExtension) BOOL extension;

+ (void)withSharedWorkspace:(id)a0 perform:(id /* block */)a1;

- (id)openSensitiveURL:(id)a0;
- (id)openURL:(id)a0;
- (id)_init;

@end
