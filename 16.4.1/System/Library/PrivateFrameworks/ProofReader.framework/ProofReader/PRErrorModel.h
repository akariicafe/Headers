@class NSString;
@protocol PRErrorModeling;

@interface PRErrorModel : NSObject <PRErrorModeling> {
    id<PRErrorModeling> _customErrorModel;
}

@property (readonly) BOOL hasCustomReplacementErrorScores;
@property (readonly) BOOL hasCustomTranspositionErrorScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)a0 actualCharacter:(unsigned short)a1;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)a0 intendedSecondCharacter:(unsigned short)a1;
- (double)errorScoreForType:(unsigned long long)a0;
- (id)initWithCustomErrorModel:(id)a0;

@end
