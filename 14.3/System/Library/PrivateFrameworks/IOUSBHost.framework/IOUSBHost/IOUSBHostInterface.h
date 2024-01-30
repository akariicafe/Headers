@interface IOUSBHostInterface : IOUSBHostObject

@property (readonly) double idleTimeout;
@property (readonly) const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *configurationDescriptor;
@property (readonly) const struct IOUSBInterfaceDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; } *interfaceDescriptor;

+ (struct __CFDictionary { } *)createMatchingDictionaryWithVendorID:(id)a0 productID:(id)a1 bcdDevice:(id)a2 interfaceNumber:(id)a3 configurationValue:(id)a4 interfaceClass:(id)a5 interfaceSubclass:(id)a6 interfaceProtocol:(id)a7 speed:(id)a8 productIDArray:(id)a9;

- (BOOL)setIdleTimeout:(double)a0 error:(id *)a1;
- (BOOL)selectAlternateSetting:(unsigned long long)a0 error:(id *)a1;
- (id)copyPipeWithAddress:(unsigned long long)a0 error:(id *)a1;

@end
