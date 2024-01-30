@class NSString;

@interface _MTLProgramAddressTableMappedBinary : NSObject <MTLProgramAddressTableMappedBinary>

@property (readonly) unsigned long long mappedAddress;
@property (readonly) unsigned long long mappedSize;
@property (readonly) unsigned long long binaryUniqueId;
@property (readonly) NSString *type;

- (id)initWithMappedAddress:(unsigned long long)a0 mappedSize:(unsigned long long)a1 binaryUniqueId:(unsigned long long)a2;
- (id)initWithMappedAddress:(unsigned long long)a0 mappedSize:(unsigned long long)a1 binaryUniqueId:(unsigned long long)a2 type:(id)a3;

@end
