@class NSString;

@interface CPForegroundApplication : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ applicationType;
@property (nonatomic, readonly) NSString *localizedApplicationName;

- (void).cxx_destruct;
- (id)init;

@end
