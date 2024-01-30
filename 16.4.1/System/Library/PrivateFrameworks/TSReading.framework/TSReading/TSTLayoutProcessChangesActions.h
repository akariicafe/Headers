@interface TSTLayoutProcessChangesActions : NSObject

@property (nonatomic) BOOL layoutInvalidate;
@property (nonatomic) BOOL layoutInvalidateProvider;
@property (nonatomic) BOOL layoutInvalidateSize;
@property (nonatomic) BOOL layoutInvalidateTableNameVisibility;
@property (nonatomic) BOOL layoutSpacesInvalidateCoordinates;
@property (nonatomic) BOOL layoutSpacesInvalidateTableOffsets;

@end
