@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload

@property (retain) NEIKEv2ConfigurationMessage *configuration;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;
- (id)createConfigAttributeFromData:(id)a0 attributeName:(id)a1 attributeLen:(unsigned short)a2 attributeType:(unsigned long long)a3 customType:(unsigned long long)a4;

@end
