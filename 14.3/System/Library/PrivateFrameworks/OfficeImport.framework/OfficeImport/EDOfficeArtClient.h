@class EDTextBox, NSString, EDComment, EDAnchor, NSMutableDictionary, EDSheet;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    BOOL mIsBoundsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchor;
- (BOOL)hasText;
- (id)comment;
- (id)clientState;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setComment:(id)a0;
- (id)sheet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)hasBounds;
- (void)setClientState:(id)a0;
- (void)setAnchor:(id)a0;
- (id)textBox;
- (BOOL)areBoundsSet;
- (void)setSheet:(id)a0;
- (id)tableModels;
- (void)setTableModels:(id)a0;
- (void)setTextBox:(id)a0;

@end
