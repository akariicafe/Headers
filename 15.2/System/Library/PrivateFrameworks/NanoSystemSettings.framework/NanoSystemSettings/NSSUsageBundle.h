@class NSString, NSArray;

@interface NSSUsageBundle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *categories;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic, getter=isPurgeable) BOOL purgeable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
