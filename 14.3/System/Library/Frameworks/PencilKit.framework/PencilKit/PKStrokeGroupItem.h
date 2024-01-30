@class NSArray, CHStrokeGroupQueryItem;

@interface PKStrokeGroupItem : NSObject

@property (retain, nonatomic) CHStrokeGroupQueryItem *strokeGroupItem;
@property (copy, nonatomic) NSArray *strokes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) long long contentType;

- (void).cxx_destruct;

@end
