@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject

@property (copy, nonatomic) NSArray *rects;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretRectBeforeInsertion;
@property (retain, nonatomic) _UITextPlaceholderAttachment *attachment;

- (id)init;
- (void).cxx_destruct;

@end
