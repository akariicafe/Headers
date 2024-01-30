@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>

@property (copy) NSData *sessionToken;

- (id)requiredKeys;
- (id)messageBody;
- (BOOL)isValidMessage;
- (BOOL)hasRequiredKeys:(id *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
