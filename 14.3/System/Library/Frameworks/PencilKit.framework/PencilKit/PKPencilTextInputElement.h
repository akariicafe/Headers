@protocol NSObject, NSCopying;

@interface PKPencilTextInputElement : NSObject

@property (readonly, copy, nonatomic) id<NSObject, NSCopying> identifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
