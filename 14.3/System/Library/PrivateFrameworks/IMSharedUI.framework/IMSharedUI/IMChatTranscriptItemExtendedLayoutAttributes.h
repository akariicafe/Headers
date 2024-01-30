@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes

@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (nonatomic) double topMargin;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
