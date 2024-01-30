@interface CKBrowserDragControllerTarget : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } screenCoordinate;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (nonatomic) double scale;
@property (nonatomic) double meshScaleFactor;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned long long associatedLayoutIntent;

+ (id)targetWithScreenCoordinate:(struct CGPoint { double x0; double x1; })a0 initialSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 meshScaleFactor:(double)a3 rotation:(double)a4 associatedLayoutIntent:(unsigned long long)a5;

- (id)description;

@end
