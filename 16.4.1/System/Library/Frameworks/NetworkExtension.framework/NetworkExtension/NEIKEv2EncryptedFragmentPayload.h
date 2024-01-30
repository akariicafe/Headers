@class NSData;

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    unsigned long long _nextPayload;
    NSData *_fragmentData;
}

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
