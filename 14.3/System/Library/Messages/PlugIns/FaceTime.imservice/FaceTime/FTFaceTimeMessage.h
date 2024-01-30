@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>

@property (copy) NSData *sessionToken;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)messageBody;
- (BOOL)isValidMessage;
- (BOOL)hasRequiredKeys:(id *)a0;
- (id)requiredKeys;

@end
