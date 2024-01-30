@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
