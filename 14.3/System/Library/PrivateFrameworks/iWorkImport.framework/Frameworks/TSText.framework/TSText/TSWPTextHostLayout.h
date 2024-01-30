@class TSWPShapeInfo, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout {
    TSWPShapeInfo *_editingShapeInfo;
}

@property (readonly, nonatomic) TSWPShapeLayout *editingShapeLayout;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateChildrenFromInfo;

@end
