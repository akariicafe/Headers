@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceVRFOutput;
@property (retain) NSData *clientDataVRFOutput;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property (copy) NSData *deviceID;
@property BOOL successfulSync;
@property BOOL marked;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientData:(id)a0;

@end
