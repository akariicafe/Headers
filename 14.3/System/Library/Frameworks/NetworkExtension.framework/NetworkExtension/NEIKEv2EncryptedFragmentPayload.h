@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload

@property unsigned int fragmentNumber;
@property unsigned int totalFragments;
@property unsigned long long nextPayload;

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
