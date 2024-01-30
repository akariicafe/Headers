@class JSValue;

@interface MusicUI.JSCloudLibraryStatusProvider : NSObject <MusicUI.JSCloudLibraryStatusProviderExports>

@property (nonatomic, readonly) JSValue *isCloudLibraryEnabled;
@property (nonatomic, readonly) JSValue *isCloudLibraryLoaded;

- (id)init;
- (void).cxx_destruct;

@end
