@class NSUUID, TITextInputTraits, UITextInputMode, TIDocumentState;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (retain, nonatomic) UITextInputMode *documentInputMode;
@property (copy, nonatomic) NSUUID *documentIdentifier;
@property (nonatomic) BOOL needsInputModeSwitchKey;

+ (id)stateForKeyboardState:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)createDocumentStateIfNecessary;

@end
