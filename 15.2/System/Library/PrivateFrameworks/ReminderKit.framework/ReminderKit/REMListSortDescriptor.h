@interface REMListSortDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL ascending;

+ (id)sortDescriptorSortingByNameAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 ascending:(BOOL)a1;

@end
