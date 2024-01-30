@class UIView, CNContact;
@protocol SFHighlightContactListCellDelegate;

@interface SFHighlightContactListCell : UIControl {
    UIView *_separator;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<SFHighlightContactListCellDelegate> delegate;
@property (nonatomic, getter=isFirstInList) BOOL firstInList;
@property (nonatomic, getter=isLastInList) BOOL lastInList;
@property (copy, nonatomic) id /* block */ infoViewControllerHandler;

- (void)_didReceiveTap:(id)a0;
- (id)initWithContact:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateMaskedCorners;
- (void).cxx_destruct;

@end
