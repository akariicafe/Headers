@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;
- (id)init;
- (void)dealloc;

@end
