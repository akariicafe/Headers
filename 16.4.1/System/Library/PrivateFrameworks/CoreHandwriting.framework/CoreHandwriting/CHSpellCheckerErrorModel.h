@interface CHSpellCheckerErrorModel : PRErrorModel

- (unsigned long long)getCharIndex:(unsigned short)a0;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)a0 actualCharacter:(unsigned short)a1;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)a0 intendedSecondCharacter:(unsigned short)a1;

@end
