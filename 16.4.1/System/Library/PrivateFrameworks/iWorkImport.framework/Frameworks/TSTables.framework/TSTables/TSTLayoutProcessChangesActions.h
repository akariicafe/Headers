@interface TSTLayoutProcessChangesActions : NSObject

@property (nonatomic) BOOL layoutInvalidate;
@property (nonatomic) BOOL layoutInvalidateProvider;
@property (nonatomic) BOOL layoutInvalidateSize;
@property (nonatomic) BOOL layoutInvalidateTableNameVisibility;
@property (nonatomic) BOOL layoutSpacesInvalidateCoordinates;
@property (nonatomic) unsigned int layoutSpacesInvalidateCoordinatesAfterRow;
@property (nonatomic) BOOL layoutSpacesInvalidateTableOffsets;
@property (nonatomic) BOOL layoutInvalidateChildren;
@property (nonatomic) BOOL layoutUpdateChildren;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } editingCellIDForInvalidation;
@property (nonatomic) BOOL layoutResetScaleToFit;

- (id)init;
- (void)layoutSpacesInvalidateCoordinatesAfterRow:(id)a0;

@end
