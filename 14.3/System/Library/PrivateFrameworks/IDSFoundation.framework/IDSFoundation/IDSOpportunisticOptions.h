@class NSDictionary, NSArray, NSDate;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *blacklistedDestinations;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) BOOL destinationsMustBeInContacts;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithBlacklistedDestinations:(id)a0 expiryDate:(id)a1 destinationsMustBeInContacts:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
