@class IKColor, NSMutableDictionary, NSString;

@interface TVAppStyle : NSObject

@property (readonly, nonatomic) NSMutableDictionary *valuesByStyle;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } width;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } minWidth;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } maxWidth;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } height;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } minHeight;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } maxHeight;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } padding;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } margin;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } interitemSpacing;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } fontSize;
@property (nonatomic) struct { union { struct UIEdgeInsets { double top; double left; double bottom; double right; } insetValue; double doubleValue; } ; BOOL isValueSet; } borderRadius;
@property (retain, nonatomic) IKColor *backgroundColor;
@property (copy, nonatomic) NSString *prototype;

- (void).cxx_destruct;
- (id)valueForStyle:(id)a0;
- (void)_setValue:(id)a0 forStyle:(id)a1;

@end
