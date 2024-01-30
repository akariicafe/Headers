@class NSNumber;

@interface INMediaUserContext : INUserContext

@property (nonatomic) long long subscriptionStatus;
@property (copy, nonatomic) NSNumber *numberOfLibraryItems;

+ (BOOL)supportsSecureCoding;
+ (id)_sharedFormatter;
+ (long long)_type;

- (void)encodeWithCoder:(id)a0;
- (id)safeLibraryItems;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
