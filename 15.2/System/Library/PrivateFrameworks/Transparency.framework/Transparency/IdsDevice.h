@class NSData, NSMutableArray;

@interface IdsDevice : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property (retain) NSData *deviceIdHash;
@property (retain) NSMutableArray *clientDataArray;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (id)debugDescription;

@end
