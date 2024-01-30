@class FHStatementDetails;

@interface FHPaymentRingSuggestionRequest : NSObject

@property (retain, nonatomic) FHStatementDetails *currentStatement;
@property (retain, nonatomic) FHStatementDetails *previousStatement;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithcurrentStatement:(id)a0 previousStatement:(id)a1;

@end
