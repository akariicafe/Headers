@class UILabel;

@interface EKSubscribedCalendarDescriptionHeader : UIView {
    UILabel *_label;
    double _lastParentWidth;
}

- (void).cxx_destruct;
- (BOOL)updateLayoutForWidth:(double)a0;
- (id)initWithParentWidth:(double)a0;

@end
