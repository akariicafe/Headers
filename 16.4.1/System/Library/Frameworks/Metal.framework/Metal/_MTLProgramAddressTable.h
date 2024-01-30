@class NSArray, NSDictionary;

@interface _MTLProgramAddressTable : NSObject <MTLProgramAddressTable>

@property (readonly) NSArray *binaryMappingsEncoderInternal;
@property (readonly) NSArray *binaryMappingsPerInvocation;
@property (readonly) NSDictionary *encoderInternalBinaries;

- (void)dealloc;
- (id)initWithEncoderMappings:(id)a0 perInvocationMappings:(id)a1 internalMappings:(id)a2;

@end
