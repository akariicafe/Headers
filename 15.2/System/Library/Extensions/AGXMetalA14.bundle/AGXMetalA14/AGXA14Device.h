@interface AGXA14Device : AGXA14FamilyDevice

- (id)initWithAcceleratorPort:(unsigned int)a0;
- (BOOL)supportsPrimitiveType:(unsigned long long)a0;
- (BOOL)isRTZRoundingSupported;

@end
