@class UIColor, NSArray, NSString, UILabel, NSMutableArray;
@protocol MFModernLabelledAtomListDelegate;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {
    void *_addressBook;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    BOOL _labelVisible;
    unsigned char _needsReflow : 1;
    double _previousWidth;
    UILabel *_lastBaselineDeceptionLabel;
}

@property (copy, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (nonatomic, getter=isLabelVisible) BOOL labelVisible;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) double lineSpacing;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (retain, nonatomic) NSArray *viewsToDodge;
@property (weak, nonatomic) id<MFModernLabelledAtomListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLabelFont;
+ (id)primaryLabelFont;
+ (double)atomLineHeight;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;

- (id)passthroughViews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)labelText;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_reflow;
- (void)addressAtom:(id)a0 displayStringDidChange:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrame;
- (void)addressBookDidChange:(id)a0;
- (void)setAddressAtomTarget:(id)a0 action:(SEL)a1;
- (id)addressAtoms;
- (void)_reflowIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForAtomAtIndex:(unsigned long long)a0 withStartingPoint:(struct CGPoint { double x0; double x1; })a1 row:(inout unsigned long long *)a2;
- (struct CGPoint { double x0; double x1; })baselinePointForRow:(unsigned long long)a0;
- (double)_remainingSpaceForRowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAddressAtomSeparatorStyle:(int)a0;
- (void)enumerateAddressAtomsUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 title:(id)a1 addressBook:(const void *)a2;
- (void)setAddresses:(id)a0 withCompletion:(id /* block */)a1;
- (void)setAddressAtomScale:(double)a0;
- (void)setAddressAtomsArePrimary:(BOOL)a0;
- (void)updateAtomsForVIP;
- (id)atomDisplayStrings;
- (void)setAtomAlpha:(double)a0;
- (void)crossFadeLabelVisibility:(BOOL)a0 atomSeparatorStyle:(int)a1 withAnimationCoordinator:(id)a2;
- (void)setOverrideFont:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (void)layoutSubviews;
- (id)title;
- (void)_setNeedsReflow;

@end
