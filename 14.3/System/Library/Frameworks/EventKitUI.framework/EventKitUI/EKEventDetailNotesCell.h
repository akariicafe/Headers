@class UILabel, UITextView;
@protocol EKEventDetailNotesCellDelegate;

@interface EKEventDetailNotesCell : EKEventDetailCell {
    UILabel *_notesTitleView;
    UITextView *_notesView;
}

@property (readonly, nonatomic) BOOL isTruncatingNotes;
@property (weak, nonatomic) id<EKEventDetailNotesCellDelegate> noteDelegate;

- (void).cxx_destruct;
- (id)_notesTitleView;
- (void)setIsTruncatingNotes:(BOOL)a0;
- (BOOL)update;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)layoutSubviews;
- (double)_layoutForWidth:(double)a0;
- (id)_notesView;

@end
