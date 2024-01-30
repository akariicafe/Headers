@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSArray *peers;
@property (copy) NSNumber *reason;

- (id)requiredKeys;
- (id)messageBody;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
