@class NSString;

@interface FCReferenceToMembership : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *membershipID;

- (id)initWithIdentifier:(id)a0;
- (id)initWithRecord:(id)a0;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
