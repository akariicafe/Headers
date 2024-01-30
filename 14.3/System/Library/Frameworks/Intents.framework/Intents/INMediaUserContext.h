@class NSNumber;

@interface INMediaUserContext : INUserContext

@property (nonatomic) long long subscriptionStatus;
@property (copy, nonatomic) NSNumber *numberOfLibraryItems;

+ (long long)_type;
+ (BOOL)supportsSecureCoding;
+ (id)_sharedFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)safeLibraryItems;
- (void)encodeWithCoder:(id)a0;

@end
