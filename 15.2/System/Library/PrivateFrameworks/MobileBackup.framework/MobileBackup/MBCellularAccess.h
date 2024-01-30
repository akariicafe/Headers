@interface MBCellularAccess : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL allowsConstrainedNetworkAccess;

+ (id)expensiveCellularAccess;
+ (id)inexpensiveCellularAccess;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
