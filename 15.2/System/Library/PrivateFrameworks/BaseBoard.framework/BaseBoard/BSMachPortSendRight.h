@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (id)wrapSendRight:(unsigned int)a0;
+ (id)bootstrapLookUpWithName:(id)a0;
+ (id)bootstrapLookUpPortWithName:(id)a0;
+ (id)taskNamePortForPID:(int)a0;
+ (char)_type;

- (id)initFromReceiveRight:(id)a0;
- (id)initWithCopyOfPort:(unsigned int)a0;
- (id)initWithSendRight:(unsigned int)a0;
- (unsigned int)sendRight;
- (id)initWithCopyOfRight:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSendRight:(unsigned int)a0 assumeOwnership:(BOOL)a1;
- (id)initWithNonRetainingPort:(unsigned int)a0;
- (id)initWithPort:(unsigned int)a0;

@end
