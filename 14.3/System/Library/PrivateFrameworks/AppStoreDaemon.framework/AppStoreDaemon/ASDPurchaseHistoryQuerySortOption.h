@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property BOOL ascending;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 ascending:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
