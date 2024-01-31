@interface CXSetVideoPresentationSizeCallAction : CXCallAction

@property (nonatomic) struct CGSize { double width; double height; } videoPresentationSize;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 videoPresentationSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
