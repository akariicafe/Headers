@class NSData, NSMutableArray;

@interface IdsMutation : TLSMessage <TLSMessage>

@property unsigned char mutationVersion;
@property unsigned char mutationType;
@property unsigned long long mutationMs;
@property (retain) NSData *uriVRFOutput;
@property (retain) NSData *accountKeyHash;
@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property unsigned long long appVersion;
@property BOOL accountMismatch;
@property unsigned long long expiryMs;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (id)debugDescription;

@end
