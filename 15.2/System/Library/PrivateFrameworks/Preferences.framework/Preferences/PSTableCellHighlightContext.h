@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {
    NSTimer *_timer;
}

@property (weak, nonatomic) UITableViewCell *cell;
@property (readonly, nonatomic) BOOL animateUnhighlight;
@property (nonatomic) long long originalSelectionStyle;
@property (readonly, nonatomic) BOOL valid;

+ (id)contextWithCell:(id)a0;

- (void)_timerFired;
- (void)performHighlightForDuration:(double)a0 animateUnhighlight:(BOOL)a1;
- (void)_killTimer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
