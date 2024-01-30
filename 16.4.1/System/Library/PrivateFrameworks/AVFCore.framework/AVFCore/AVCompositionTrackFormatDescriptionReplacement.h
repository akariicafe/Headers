@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {
    struct opaqueCMFormatDescription { } *_originalFormatDescription;
    struct opaqueCMFormatDescription { } *_replacementFormatDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const struct opaqueCMFormatDescription { } *originalFormatDescription;
@property (readonly) const struct opaqueCMFormatDescription { } *replacementFormatDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription { } *)a0 andReplacementFormatDescription:(struct opaqueCMFormatDescription { } *)a1;

@end
