@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>

@property (copy) NSData *sessionToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)isValidMessage;

@end
