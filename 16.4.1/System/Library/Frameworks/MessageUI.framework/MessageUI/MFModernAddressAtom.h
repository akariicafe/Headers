@class NSString, UIFont, CNAtomView;
@protocol MFModernAddressAtomDelegate, ECEmailAddressConvertible;

@interface MFModernAddressAtom : UIControl <CNAtomViewResembling> {
    id<MFModernAddressAtomDelegate> _delegate;
    CNAtomView *_atomView;
    void *_person;
    id<ECEmailAddressConvertible> _fullAddress;
    NSString *_displayString;
    unsigned int _maxWidth;
    int _identifier;
    unsigned char _addressIsPhoneNumber : 1;
    unsigned char _updatedABPerson : 1;
    unsigned char _isDisplayStringFromAddressBook : 1;
    void *_addressBook;
    NSString *_addressIdentifier;
}

@property (readonly, nonatomic) NSString *addressIdentifier;
@property (nonatomic) double firstLineIndent;
@property (readonly, nonatomic) long long numberOfLines;
@property (nonatomic) BOOL isPrimaryAddressAtom;
@property (nonatomic) BOOL hidesVIPIndicator;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) BOOL separatorIsLeftAligned;
@property (nonatomic) double scale;
@property (nonatomic) int separatorStyle;
@property (nonatomic) unsigned long long presentationOptions;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } baselinePoint;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (retain, nonatomic) UIFont *titleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyDisplayStringForAddress:(id)a0 usingAddressBook:(void *)a1 useAbbreviatedName:(BOOL)a2;

- (id)emailAddress;
- (id)displayString;
- (void)setAddress:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (void)setPresentationOptions:(unsigned long long)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxWidth:(unsigned int)a0;
- (int)identifier;
- (void)setHighlighted:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)viewForLastBaselineLayout;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)setScale:(double)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)presentationOptions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_highlightBounds;
- (struct CGPoint { double x0; double x1; })baselinePoint;
- (void)setAtomFont:(id)a0;
- (void *)ABPerson;
- (int)ABPropertyType;
- (void)_updateABPerson;
- (void)_displayStringDidChange;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)a0;
- (void)addressBookDidChange:(id)a0;
- (id)contactWithKeysToFetch:(id)a0;
- (id)initWithAddress:(id)a0 presentationOptions:(unsigned long long)a1 isPhoneNumber:(BOOL)a2 maxWidth:(double)a3 addressBook:(void *)a4;
- (BOOL)isDisplayStringFromAddressBook;
- (void)performBuildInAnimationFromTextColor:(id)a0 withDuration:(double)a1;
- (id)presentationOptionsDescription;
- (void)setIsPrimaryAddressAtom:(BOOL)a0;
- (id)unmodifiedAddressString;

@end
