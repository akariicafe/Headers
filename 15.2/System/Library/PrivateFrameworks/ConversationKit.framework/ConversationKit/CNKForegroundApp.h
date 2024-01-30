@class NSString;

@interface CNKForegroundApp : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleIdentifier:(id)a0 type:(long long)a1;

@end
