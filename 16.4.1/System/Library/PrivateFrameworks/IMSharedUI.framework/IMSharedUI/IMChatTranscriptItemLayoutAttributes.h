@class NSIndexPath;

@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying>

@property (copy, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
