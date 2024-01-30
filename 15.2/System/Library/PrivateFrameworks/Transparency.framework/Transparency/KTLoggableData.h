@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property BOOL successfulSync;
@property BOOL marked;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithClientData:(id)a0;
- (void)computeHashesForSalt:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)verifySignatureWithAccountKey:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
