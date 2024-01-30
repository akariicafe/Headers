@class NSData, NSMutableArray;

@interface IdsAccount : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property (retain) NSData *accountKeyHash;
@property (retain) NSMutableArray *devicesArray;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (id)debugDescription;

@end
