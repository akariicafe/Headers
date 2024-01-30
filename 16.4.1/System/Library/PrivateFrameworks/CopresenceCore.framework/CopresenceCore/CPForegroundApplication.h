@class NSString;

@interface CPForegroundApplication : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ featureFlags;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ applicationType;
@property (nonatomic, readonly) NSString *localizedApplicationName;
@property (nonatomic, readonly) BOOL isGameCenterApplication;

- (id)init;
- (void).cxx_destruct;

@end
