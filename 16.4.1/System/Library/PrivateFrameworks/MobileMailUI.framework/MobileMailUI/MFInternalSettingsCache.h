@interface MFInternalSettingsCache : NSObject

@property (nonatomic) BOOL tiltedTabSkyViewEnabled;
@property (nonatomic) BOOL UIDebuggingEnabled;

+ (id)sharedCache;

@end
