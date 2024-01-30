@class NSData;

@interface NEIKEv2Payload : NSObject

@property BOOL isInbound;
@property (readonly) BOOL hasRequiredFields;
@property (retain) NSData *payloadData;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long type;

+ (id)copyTypeDescription;
+ (id)createPayloadWithType:(unsigned long long)a0 fromData:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyPayloadData;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
