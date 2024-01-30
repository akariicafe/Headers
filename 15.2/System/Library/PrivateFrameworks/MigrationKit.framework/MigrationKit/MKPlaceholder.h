@class NSString;

@interface MKPlaceholder : NSObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *container;

- (id)initWithBundleIdentifier:(id)a0;
- (void)install;
- (void).cxx_destruct;

@end
