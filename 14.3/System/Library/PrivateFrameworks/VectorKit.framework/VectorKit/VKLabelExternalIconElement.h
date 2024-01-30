@interface VKLabelExternalIconElement : NSObject <NSSecureCoding> {
    struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float _e[2]; } size; struct Matrix<float, 2, 1> { float _e[2]; } anchorPoint; BOOL isRound; unsigned char minZoom; } _element;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (const struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; BOOL x2; unsigned char x3; } *)element;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithIconElement:(const struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; BOOL x2; unsigned char x3; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
