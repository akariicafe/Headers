@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (id)bootstrapLookUpWithName:(id)a0;
+ (id)_rightDescription;
+ (id)taskNamePortForPID:(int)a0;
+ (struct _xpc_type_s { } *)_decodeType;
+ (id)bootstrapLookUpPortWithName:(id)a0;
+ (void)_unsafe_destroyPort:(unsigned int)a0;
+ (unsigned int)_unsafe_decodePort:(id)a0;
+ (id)wrapSendRight:(unsigned int)a0;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)a0;

- (unsigned int)sendRight;
- (id)initWithSendRight:(unsigned int)a0;
- (id)initFromReceiveRight:(id)a0;
- (id)initWithPort:(unsigned int)a0;
- (id)initWithSendRight:(unsigned int)a0 assumeOwnership:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCopyOfRight:(id)a0;
- (id)_lock_encodePort:(unsigned int)a0;
- (id)initWithCopyOfPort:(unsigned int)a0;
- (id)initWithNonRetainingPort:(unsigned int)a0;

@end
