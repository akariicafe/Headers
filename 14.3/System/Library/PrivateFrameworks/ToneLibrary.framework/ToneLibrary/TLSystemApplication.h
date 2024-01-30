@class NSString;

@interface TLSystemApplication : NSObject

@property (class, readonly) TLSystemApplication *defaultSystemApplication;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 name:(id)a1;

@end
