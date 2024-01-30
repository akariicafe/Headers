@class NSString, NSAttributedString, NSDictionary;

@interface WFValueTextAttachment : NSTextAttachment

@property (readonly, nonatomic) NSAttributedString *displayString;
@property (nonatomic) BOOL requiresRedraw;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } borderInsets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSString *valueName;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)humanReadableStringFromValueTextAttributedString:(id)a0;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 ofType:(id)a1;

@end
