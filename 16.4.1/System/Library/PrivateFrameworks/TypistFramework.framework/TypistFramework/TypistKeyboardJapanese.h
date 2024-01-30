@class NSDictionary, NSMutableDictionary, NSCharacterSet;

@interface TypistKeyboardJapanese : TypistKeyboard

@property (retain, nonatomic) NSDictionary *baseCharacters;
@property (retain, nonatomic) NSDictionary *accentKey;
@property (retain, nonatomic) NSDictionary *updownKey;
@property (retain, nonatomic) NSDictionary *multiTapCompleteKey;
@property (retain, nonatomic) NSCharacterSet *doubleAccentCharacterSet;
@property (retain, nonatomic) NSDictionary *flickTable;
@property (retain, nonatomic) NSMutableDictionary *multiTapOrbit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTenKey;
- (BOOL)_canMultiTap;
- (id)_convertKanaStringstoMultiTapNecessary:(id)a0;
- (id)_convertKanaStringstoRomajiIfNecessary:(id)a0;
- (id)_flickGestureDirection;
- (id)addAccentKeyAction:(id)a0;
- (id)addKeyboardPopupKeys:(id)a0 inPlane:(id)a1 addTo:(id)a2 keyplaneKeycaps:(id)a3;
- (id)changeKeyNameToGenericCharacter:(id)a0;
- (long long)commitCandidate:(id)a0;
- (long long)commitCandidateAtIndex:(long long)a0;
- (id)generateKeyplaneSwitchTable:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (id)getExpectedPlaneNameForKey:(id)a0 currentPlane:(id)a1;
- (id)getPostfixKey:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (BOOL)isAutoshiftedToCapitalPlane:(id)a0;
- (BOOL)isKanaKeyboard;
- (BOOL)isSwitchedToCapitalPlane:(id)a0 previous:(id)a1 currentPlane:(id)a2 context:(id)a3;
- (void)setup50OnFlick:(id)a0 forKey:(id)a1 keyName:(id)a2 planeName:(id)a3;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupTenKey:(id)a0 forKey:(id)a1 keyName:(id)a2 planeName:(id)a3;
- (BOOL)usesMecabraCandidateBar;
- (id)whiteSpaceCharSet;

@end
