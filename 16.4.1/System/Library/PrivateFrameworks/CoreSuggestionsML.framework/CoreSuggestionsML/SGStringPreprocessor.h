@class NSMutableData;

@interface SGStringPreprocessor : NSObject {
    NSMutableData *_buffer;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeNonASCII:(id)a0;
- (void)removeEmojiModifyingCharacters:(id)a0;
- (void)replaceAllWhitespaceWithSpaces:(id)a0;
- (void)trimWhitespace:(id)a0;
- (void)addToEnd:(id)a0 withValue:(id)a1;
- (void)addToStart:(id)a0 withValue:(id)a1;
- (unsigned short *)bufferPtrWithMinimumLength:(unsigned long long)a0;
- (id)characterSetFromString:(id)a0;
- (void)combineDakutenAndHandakuten:(id)a0;
- (void)decomposeAndRecomposeStringWithCompatibilityMapping:(id)a0;
- (void)decomposeStringWithCompatibilityMapping:(id)a0;
- (void)finalizeForWordPieceCaseInsensitive:(id)a0;
- (void)finalizeForWordPieceCaseSensitive:(id)a0;
- (void)lowerCase:(id)a0;
- (void)mergeAnyConsecutiveCharacters:(id)a0;
- (void)mergeAnyConsecutiveNonalphabeticCharacters:(id)a0;
- (void)mergeAnyConsecutiveNonalphabeticCharactersWithExceptions:(id)a0 withValue:(id)a1;
- (void)mergeNumbersSeparatedByASCIISpace:(id)a0;
- (void)mergeTwoOrMoreConsecutiveCharacters:(id)a0;
- (void)removeCharacters:(id)a0 withExceptions:(id)a1 fromString:(id)a2;
- (void)removeCharacters:(id)a0 withValue:(id)a1;
- (void)removeDuplicateWhitespace:(id)a0;
- (void)removeEmojiModifyingCharactersWithExceptions:(id)a0 withValue:(id)a1;
- (void)removeEmojis:(id)a0;
- (void)removeEmojisWithExceptions:(id)a0 withValue:(id)a1;
- (void)removeNonBaseCharacters:(id)a0;
- (void)removeNonBasicMultilingualPlane:(id)a0;
- (void)removeNonEmojiSymbols:(id)a0;
- (void)removeNonEmojiSymbolsWithExceptions:(id)a0 withValue:(id)a1;
- (void)removePunctuation:(id)a0;
- (void)removePunctuationWithExceptions:(id)a0 withValue:(id)a1;
- (void)removeSpacingModifierLetters:(id)a0;
- (void)removeSymbols:(id)a0;
- (void)removeSymbolsWithExceptions:(id)a0 withValue:(id)a1;
- (void)replace:(id)a0 withBuffer:(unsigned short *)a1 toIndex:(unsigned long long)a2;
- (void)replaceCharactersWithSpaces:(id)a0 withValue:(id)a1;
- (void)replaceContactNamesWithString:(id)a0 withValue:(id)a1;
- (void)replaceLinksWithString:(id)a0 withValue:(id)a1;
- (void)replaceNumbersWithString:(id)a0 withValue:(id)a1;
- (void)separateCharacter:(id)a0 withValue:(id)a1;
- (void)separateFrenchElisions:(id)a0;
- (void)stripCombiningMarks:(id)a0;
- (void)stripNonBaseCharacters:(id)a0;
- (void)transformFullwidthToHalfwidth:(id)a0;
- (void)transformFullwidthToHalfwidthASCII:(id)a0;
- (void)transformHalfwidthToFullwidthCJK:(id)a0;

@end
