@class NSArray;

@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;

+ (id)contextFromExtensionItem:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)newExtensionItem;

@end
