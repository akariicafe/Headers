@class NSArray, MUBoxLayoutInternal;
@protocol MULayoutItem;

@interface MUBoxLayout : MUConstraintLayout {
    MUBoxLayoutInternal *_internal;
}

@property (weak, nonatomic) id<MULayoutItem> container;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL verticalAlignmentBoundsContent;
@property (nonatomic) float verticalAlignmentFittingSizePriority;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) BOOL horizontalAlignmentBoundsContent;
@property (nonatomic) float horizontalAlignmentFittingSizePriority;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (copy, nonatomic) NSArray *arrangedLayoutItems;

- (id)initWithContainer:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })paddingForArrangedLayoutItem:(id)a0;
- (void)setOffset:(struct UIOffset { double x0; double x1; })a0 forArrangedLayoutItem:(id)a1;
- (void)removeArrangedLayoutItem:(id)a0;
- (void)addArrangedLayoutItem:(id)a0;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 forArrangedLayoutItem:(id)a1;
- (struct UIOffset { double x0; double x1; })offsetForArrangedLayoutItem:(id)a0;
- (void).cxx_destruct;
- (void)disableHorizontalAlignmentForArrangedLayoutItem:(id)a0;
- (void)disableVerticalAlignmentForArrangedLayoutItem:(id)a0;
- (BOOL)hasHorizontalAlignmentForArrangedLayoutItem:(id)a0;
- (BOOL)hasVerticalAlignmentForArrangedLayoutItem:(id)a0;
- (BOOL)horizontalAlignmentBoundsContentForArrangedLayoutItem:(id)a0;
- (long long)horizontalAlignmentForArrangedLayoutItem:(id)a0;
- (float)horizontalFittingSizePriorityForArrangedLayoutItem:(id)a0;
- (void)resetHorizontalAlignmentForArrangedLayoutItem:(id)a0;
- (void)resetVerticalAlignmentForArrangedLayoutItem:(id)a0;
- (void)setHorizontalAlignment:(long long)a0 forArrangedLayoutItem:(id)a1;
- (void)setHorizontalAlignmentBoundsContent:(BOOL)a0 forArrangedLayoutItem:(id)a1;
- (void)setHorizontalFittingSizePriority:(float)a0 forArrangedLayoutItem:(id)a1;
- (void)setVerticalAlignment:(long long)a0 forArrangedLayoutItem:(id)a1;
- (void)setVerticalAlignmentBoundsContent:(BOOL)a0 forArrangedLayoutItem:(id)a1;
- (void)setVerticalFittingSizePriority:(float)a0 forArrangedLayoutItem:(id)a1;
- (BOOL)verticalAlignmentBoundsContentForArrangedLayoutItem:(id)a0;
- (long long)verticalAlignmentForArrangedLayoutItem:(id)a0;
- (float)verticalFittingSizePriorityForArrangedLayoutItem:(id)a0;

@end
