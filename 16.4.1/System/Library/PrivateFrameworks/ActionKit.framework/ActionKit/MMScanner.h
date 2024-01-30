@class NSString, NSMutableArray, NSArray;

@interface MMScanner : NSObject

@property (nonatomic) unsigned long long startLocation;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currentRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } currentLineRange;
@property (nonatomic) unsigned long long rangeIndex;
@property (readonly, nonatomic) NSMutableArray *transactions;
@property (readonly, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *lineRanges;
@property (nonatomic) unsigned long long location;

+ (id)scannerWithString:(id)a0;
+ (id)scannerWithString:(id)a0 lineRanges:(id)a1;

- (void)beginTransaction;
- (unsigned short)previousCharacter;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)advance;
- (unsigned short)nextCharacter;
- (id)nextWord;
- (void)commitTransaction:(BOOL)a0;
- (unsigned long long)skipWhitespace;
- (unsigned long long)skipToEndOfLine;
- (id)_lineRangesForString:(id)a0;
- (unsigned long long)_locationOfCharacter:(unsigned short)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)advanceToNextLine;
- (BOOL)atBeginningOfLine;
- (BOOL)atEndOfLine;
- (BOOL)atEndOfString;
- (id)initWithString:(id)a0 lineRanges:(id)a1;
- (BOOL)matchString:(id)a0;
- (id)nextWordWithCharactersFromSet:(id)a0;
- (id)previousWord;
- (id)previousWordWithCharactersFromSet:(id)a0;
- (unsigned long long)skipCharactersFromSet:(id)a0;
- (unsigned long long)skipCharactersFromSet:(id)a0 max:(unsigned long long)a1;
- (unsigned long long)skipEmptyLines;
- (unsigned long long)skipIndentationUpTo:(unsigned long long)a0;
- (unsigned long long)skipNestedBracketsWithDelimiter:(unsigned short)a0;
- (unsigned long long)skipToLastCharacterOfLine;
- (unsigned long long)skipWhitespaceAndNewlines;

@end
