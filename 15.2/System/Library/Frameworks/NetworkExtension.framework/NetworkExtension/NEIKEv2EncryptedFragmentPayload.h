@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload

@property unsigned int fragmentNumber;
@property unsigned int totalFragments;
@property unsigned long long nextPayload;

+ (id)copyTypeDescription;

- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end
