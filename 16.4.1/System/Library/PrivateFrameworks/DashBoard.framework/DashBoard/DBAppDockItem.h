@class NSString;

@interface DBAppDockItem : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 category:(unsigned long long)a1 active:(BOOL)a2;
- (BOOL)isEqualToAppDockItem:(id)a0;

@end
