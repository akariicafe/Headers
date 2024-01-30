@class NSDictionary;

@interface TIKeyboardInputManager_ja_Kana : TIKeyboardInputManager_ja {
    BOOL _is3x3;
    BOOL _isFlickOnly;
    BOOL _knowInputMode;
    BOOL _knowHardwareMode;
    BOOL _knowSplitMode;
    NSDictionary *_kanaFlickDirectionMap_current;
    NSDictionary *_kanaFlickKeyMap_current;
}

@property (nonatomic) BOOL supportsFlickAutocorrection;
@property (retain, nonatomic) NSDictionary *kanaFlickDirectionMap_3x3;
@property (retain, nonatomic) NSDictionary *kanaFlickDirectionMap_50on;
@property (retain, nonatomic) NSDictionary *kanaFlickKeyMap_3x3;
@property (retain, nonatomic) NSDictionary *kanaFlickKeyMap_50on;

+ (Class)wordSearchClass;

- (void)setInSplitKeyboardMode:(BOOL)a0;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)addInput:(id)a0 withContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (void)deleteFromInputWithContext:(id)a0;
- (id)geometryModelData;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)needsTouchEvents;
- (void)syncToLayoutState:(id)a0;
- (id)validCharacterSetForAutocorrection;
- (void)_deleteFromInput;
- (void)buildFlickTables;
- (void)calculateGeometryForInput:(id)a0;
- (unsigned short)flickKeyForBaseKey:(unsigned short)a0 direction:(int)a1;
- (id)geometryDataWithSubstitutedMultitapKeys:(id)a0;
- (id)liveConversionTextInputManager;
- (void)resetWordSearchWithClass:(Class)a0;

@end
