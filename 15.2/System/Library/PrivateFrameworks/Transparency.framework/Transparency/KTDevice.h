@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceID;
@property (retain) NSData *deviceIDHash;
@property (retain) NSMutableArray *clientDatas;
@property (readonly) NSData *deviceIDVRFOutput;

- (void)updateWithMutation:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clientRecordsForHash:(id)a0;
- (id)clientRecordForAppVersion:(unsigned long long)a0 clientDataHash:(id)a1;
- (void)removeClientDatasObject:(id)a0;
- (void)markClientDatasForAppVersion:(unsigned long long)a0 mutationMs:(unsigned long long)a1;
- (void)addClientDatasObject:(id)a0;
- (id)debugDescription;

@end
