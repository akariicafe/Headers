@class NSString, NSDate;

@interface MTIDSecret : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSDate *effectiveDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL isSynchronized;
@property (retain, nonatomic) NSString *syncStatusCode;

- (id)debugInfo;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 effectiveDate:(id)a1 expirationDate:(id)a2 isSynchronize:(BOOL)a3;

@end
