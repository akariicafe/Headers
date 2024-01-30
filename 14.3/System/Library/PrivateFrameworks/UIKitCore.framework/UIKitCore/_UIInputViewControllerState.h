@class NSUUID, TITextInputTraits, UITextInputMode, TIDocumentState;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (retain, nonatomic) UITextInputMode *documentInputMode;
@property (copy, nonatomic) NSUUID *documentIdentifier;
@property (nonatomic) BOOL needsInputModeSwitchKey;

+ (id)stateForKeyboardState:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)createDocumentStateIfNecessary;
- (void)encodeWithCoder:(id)a0;

@end
