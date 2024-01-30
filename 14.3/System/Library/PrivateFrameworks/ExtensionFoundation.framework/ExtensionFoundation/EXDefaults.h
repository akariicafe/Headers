@interface EXDefaults : NSObject

@property (readonly) BOOL implementsNSExtension;

+ (id)sharedInstance;

- (BOOL)implementsNSExtension;
- (id)_init;

@end
