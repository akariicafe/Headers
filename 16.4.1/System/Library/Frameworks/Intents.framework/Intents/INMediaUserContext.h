@class NSNumber;

@interface INMediaUserContext : INUserContext

@property (nonatomic) long long subscriptionStatus;
@property (copy, nonatomic) NSNumber *numberOfLibraryItems;

+ (id)_sharedFormatter;
+ (BOOL)supportsSecureCoding;
+ (long long)_type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)safeLibraryItems;

@end
