@interface MTRDeviceControllerStartupParamsInternal : MTRDeviceControllerStartupParams

@property (readonly, nonatomic) void *fabricTable;
@property (readonly, nonatomic) struct Optional<unsigned char> { BOOL mHasValue; union Value { unsigned char mData; } mValue; } fabricIndex;
@property (readonly, nonatomic) struct OperationalKeystore { void /* function */ **x0; } *keystore;

- (id).cxx_construct;
- (id)initWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initForExistingFabric:(void *)a0 fabricIndex:(unsigned char)a1 keystore:(struct OperationalKeystore { void /* function */ **x0; } *)a2 params:(id)a3;
- (id)initForNewFabric:(void *)a0 keystore:(struct OperationalKeystore { void /* function */ **x0; } *)a1 params:(id)a2;
- (BOOL)keypairsMatchCertificates;

@end
