@class TSWPLinkedLayout;

@interface TSWPLinkedTextBoxLayout : TSWPShapeLayout

@property (nonatomic) unsigned long long indexInFlow;
@property (readonly, nonatomic) TSWPLinkedLayout *containedLayout;

- (void)i_invalidateWrap;

@end
