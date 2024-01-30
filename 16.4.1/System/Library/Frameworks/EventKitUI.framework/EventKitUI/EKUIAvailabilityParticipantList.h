@class NSMutableArray;

@interface EKUIAvailabilityParticipantList : UIScrollView {
    double _scrollOffset;
    double _rowHeight;
    NSMutableArray *_containers;
}

+ (double)listWidthForCompact:(BOOL)a0;

- (void)layoutSubviews;
- (void)setRowHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithParticipants:(id)a0 viewController:(id)a1;
- (void)setBusyParticipants:(id)a0;
- (void)setVerticalScrollOffset:(double)a0;

@end
