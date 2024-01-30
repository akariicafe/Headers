@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property BOOL ascending;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 ascending:(BOOL)a1;

@end
