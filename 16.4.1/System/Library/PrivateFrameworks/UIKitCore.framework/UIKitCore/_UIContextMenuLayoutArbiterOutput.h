@class NSMapTable;

@interface _UIContextMenuLayoutArbiterOutput : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuFrame;
@property (nonatomic) struct CGPoint { double x; double y; } menuAnchorPoint;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } anchor;
@property (retain, nonatomic) NSMapTable *accessoryPositions;

- (void).cxx_destruct;

@end
