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

- (void)layoutSubviews;
- (int)identifier;
- (id)emailAddress;
- (void)setPresentationOptions:(unsigned long long)a0;
- (void)setEnabled:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)displayString;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void *)ABPerson;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDelegate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_highlightBounds;
- (void)setAddress:(id)a0;
- (void)setAtomFont:(id)a0;
- (void).cxx_destruct;
- (void)setOpaque:(BOOL)a0;
- (void)dealloc;
- (void)setMaxWidth:(unsigned int)a0;
- (void)setScale:(double)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })baselinePoint;
- (unsigned long long)presentationOptions;
- (id)contactWithKeysToFetch:(id)a0;
- (void)performBuildInAnimationFromTextColor:(id)a0 withDuration:(double)a1;
- (void)setIsPrimaryAddressAtom:(BOOL)a0;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)a0;
- (void)_displayStringDidChange;
- (id)presentationOptionsDescription;
- (void)_updateABPerson;
- (id)unmodifiedAddressString;
- (id)initWithAddress:(id)a0 presentationOptions:(unsigned long long)a1 isPhoneNumber:(BOOL)a2 maxWidth:(double)a3 addressBook:(void *)a4;
- (void)addressBookDidChange:(id)a0;
- (BOOL)isDisplayStringFromAddressBook;
- (int)ABPropertyType;

@end
