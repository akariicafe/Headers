@interface TSTTableRepProcessChangesActions : NSObject

@property (nonatomic) struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } dirtyCellRange;
@property (nonatomic) struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } dirtyStrokeRange;
@property (nonatomic) BOOL invalidateAllChrome;
@property (nonatomic) BOOL invalidateColumnChrome;
@property (nonatomic) BOOL invalidateRowChrome;
@property (nonatomic) BOOL hideChromeContextMenuButton;
@property (nonatomic) BOOL invalidateKnobs;
@property (nonatomic) BOOL invalidateSelection;
@property (nonatomic) BOOL invalidateTableName;
@property (nonatomic) BOOL updateEditorRemainders;
@property (nonatomic) BOOL syncReferenceHighlightState;
@property (nonatomic) BOOL setNeedsDisplay;
@property (nonatomic) BOOL hideStepperHUD;

@end
