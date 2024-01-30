@class NSSet;

@interface TDImageStackAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;

- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (id)imageStackDataWithDocument:(id)a0;

@end
