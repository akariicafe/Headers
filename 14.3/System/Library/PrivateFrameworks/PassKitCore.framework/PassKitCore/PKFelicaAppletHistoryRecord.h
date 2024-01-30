@class NSString, NSNumber;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying>

@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSNumber *transactionType;
@property (copy, nonatomic) NSNumber *sectorCombination;
@property (copy, nonatomic) NSNumber *amountType;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
