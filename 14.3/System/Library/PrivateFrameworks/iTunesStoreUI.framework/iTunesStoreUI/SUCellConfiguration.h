@class UIView;
@protocol SUCellConfigurationView;

@interface SUCellConfiguration : NSObject {
    id _context;
    unsigned char _isDeleteConfirmationVisible : 1;
    unsigned char _needsDisplay : 1;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) id representedObject;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) BOOL needsDisplay;
@property (nonatomic) UIView<SUCellConfigurationView> *view;
@property (readonly, nonatomic) unsigned long long numberOfImages;
@property (readonly, nonatomic) unsigned long long numberOfLabels;
@property (nonatomic) BOOL isDeleteConfirmationVisible;

+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (void)reloadData;
- (void)dealloc;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)drawBackgroundWithModifiers:(unsigned long long)a0;
- (void)drawWithModifiers:(unsigned long long)a0;
- (id)stringForLabelAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLabelAtIndex:(unsigned long long)a0;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)a0;
- (BOOL)getShadowColor:(id *)a0 offset:(struct CGSize { double x0; double x1; } *)a1 forLabelAtIndex:(unsigned long long)a2 withModifiers:(unsigned long long)a3;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (id)imageAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForImageAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
