@class UILabel;

@interface EKSubscribedCalendarDescriptionHeader : UIView {
    UILabel *_label;
    double _lastParentWidth;
}

- (void).cxx_destruct;
- (id)initWithParentWidth:(double)a0;
- (id)initWithParentWidth:(double)a0 showHolidayCalendarDescription:(BOOL)a1;
- (BOOL)updateLayoutForWidth:(double)a0;

@end
