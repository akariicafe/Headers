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
- (BOOL)hasBounds;
- (BOOL)hasText;
- (void)setAnchor:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)clientState;
- (void).cxx_destruct;
- (id)comment;
- (void)setComment:(id)a0;
- (void)setClientState:(id)a0;
- (id)sheet;
- (void)setSheet:(id)a0;
- (void)setTableModels:(id)a0;
- (id)textBox;
- (BOOL)areBoundsSet;
- (void)setTextBox:(id)a0;
- (id)tableModels;

@end
