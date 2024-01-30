@class NSData;

@interface TLSExtension : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property unsigned char extensionType;
@property (retain) NSData *extensionData;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)data;

@end
