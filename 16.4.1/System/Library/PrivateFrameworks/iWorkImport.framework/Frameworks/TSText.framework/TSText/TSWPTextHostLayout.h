@class TSWPShapeInfo, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout {
    TSWPShapeInfo *_editingShapeInfo;
}

@property (readonly, nonatomic) TSWPShapeLayout *editingShapeLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateChildrenFromInfo;

@end
