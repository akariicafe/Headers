@class NSDictionary;

@interface TypistKeyboardUyghur : TypistKeyboard

@property (retain, nonatomic) NSDictionary *smallLettersInitialVowelMap;
@property (retain, nonatomic) NSDictionary *capitalLettersInitialVowelMap;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)preprocessing;
- (void).cxx_destruct;
- (void)_addDoubleVowelKeys:(id)a0 withMapping:(id)a1;
- (id)addKeyboardPopupKeys:(id)a0 inPlane:(id)a1 addTo:(id)a2 keyplaneKeycaps:(id)a3;
- (id)init:(id)a0 options:(id)a1;

@end
