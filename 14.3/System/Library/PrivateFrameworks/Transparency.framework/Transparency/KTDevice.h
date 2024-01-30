@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceID;
@property (retain) NSData *deviceIDVRFOutput;
@property (retain) NSMutableArray *clientDatas;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (BOOL)updateWithMutation:(id)a0 error:(id *)a1;
- (id)clientRecordForAppVersion:(unsigned long long)a0 clientDataVRFOutput:(id)a1;
- (void)markClientDatasForAppVersion:(unsigned long long)a0 mutationMs:(unsigned long long)a1;
- (void)addClientDatasObject:(id)a0;
- (void)removeClientDatasObject:(id)a0;
- (id)clientRecordsForVRFOutput:(id)a0;

@end
