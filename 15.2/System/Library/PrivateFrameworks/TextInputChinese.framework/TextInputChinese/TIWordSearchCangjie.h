@interface TIWordSearchCangjie : TIWordSearchShapeBased

@property BOOL suchengEnabled;
@property BOOL supportsEnglish;

- (int)mecabraInputMethodType;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)uncachedCandidatesForOperation:(id)a0;
- (BOOL)validateCode:(id)a0 withOption:(unsigned long long)a1;

@end
