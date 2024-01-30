@class NSNumber, NSData, NSArray;

@interface NFTrustKeyRequest : NFTrustObject

@property (retain, nonatomic) NSNumber *counterLimit;
@property (retain, nonatomic) NSData *subjectIdentifier;
@property (retain, nonatomic) NSData *discretionaryData;
@property (retain, nonatomic) NSArray *localValidations;

+ (BOOL)supportsSecureCoding;
+ (id)keyRequestWithSubjectIdentifier:(id)a0 discretionaryData:(id)a1 localValidations:(id)a2 counterLimit:(id)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
