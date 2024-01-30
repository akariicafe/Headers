@class NSArray, NSString;

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>

@property (readonly, copy, nonatomic) NSArray *converters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;
- (id)initWithTileIdentifierConverters:(id)a0;

@end
