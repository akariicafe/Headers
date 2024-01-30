@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *clientData;
@property unsigned long long applicationVersion;
@property (retain) NSData *clientDataVRFOutput;
@property (retain) NSDate *markedForDeletion;
@property (retain) NSDate *deletionEscrowExpiry;
@property (retain) NSDate *addedDate;
@property BOOL verified;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (id)initWithSingleDataRecord:(id)a0;

@end
