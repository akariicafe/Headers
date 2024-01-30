@class NSDictionary, NRPBDeviceCollectionDiff;

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {
    NSDictionary *_diffDeviceDiffs;
}

@property (readonly, nonatomic) NRPBDeviceCollectionDiff *protobuf;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithDeviceCollectionDiffDeviceDiffs:(id)a0;
- (id)diffCollectionDiffForPairingID:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)allPairingIDs;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;

@end
