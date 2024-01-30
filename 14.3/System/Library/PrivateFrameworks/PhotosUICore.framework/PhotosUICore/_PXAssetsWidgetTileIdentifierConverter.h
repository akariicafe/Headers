@class NSString;

@interface _PXAssetsWidgetTileIdentifierConverter : NSObject <PXTileIdentifierConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;

@end
