@class NSData, NSMutableArray;

@interface SingleDataRecord : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property unsigned long long appVersion;
@property (retain) NSData *clientDataHash;
@property unsigned long long markedForDeletionMs;
@property unsigned long long addedMs;
@property BOOL accountMismatch;
@property unsigned long long expiryMs;
@property unsigned long long escrowExpiryMs;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (id)debugDescription;

@end
