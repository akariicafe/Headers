@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *clientData;
@property unsigned long long applicationVersion;
@property (retain) NSData *clientDataHash;
@property (retain) NSDate *markedForDeletion;
@property (retain) NSDate *addedDate;
@property (retain) NSDate *expiry;
@property (retain) NSDate *escrowExpiry;
@property BOOL verified;
@property (readonly) NSData *clientDataVRFOutput;
@property (readonly) NSDate *deletionEscrowExpiry;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSingleDataRecord:(id)a0;
- (id)debugDescription;

@end
