@class NSString;

@interface FCReferenceToMembership : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *membershipID;

- (id)initWithRecord:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;

@end
