@interface BSMachPortReceiveRight : BSMachPortRight

+ (id)_rightDescription;
+ (struct _xpc_type_s { } *)_decodeType;
+ (void)_unsafe_destroyPort:(unsigned int)a0;
+ (unsigned int)_unsafe_decodePort:(id)a0;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)a0;

- (id)initWithPort:(unsigned int)a0;
- (id)init;
- (id)_lock_encodePort:(unsigned int)a0;

@end
