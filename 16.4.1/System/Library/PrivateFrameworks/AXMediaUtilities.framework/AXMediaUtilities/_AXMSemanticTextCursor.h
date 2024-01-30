@class NSDictionary, NSAttributedString, AXMSemanticText;

@interface _AXMSemanticTextCursor : NSObject {
    NSAttributedString *_text;
    AXMSemanticText *_semanticText;
    unsigned long long _length;
    unsigned long long _currentIndex;
}

@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } remainingRange;
@property (readonly, nonatomic) BOOL isOtherWord;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) BOOL isPunctuation;
@property (readonly, nonatomic) BOOL isProperNoun;
@property (readonly, nonatomic) BOOL isSentenceTerminator;
@property (readonly, nonatomic) BOOL isInLexicon;
@property (readonly, nonatomic) BOOL isCustomPattern;
@property (readonly, nonatomic) BOOL isDataDetector;

- (void).cxx_destruct;
- (void)advance;
- (id)initWithText:(id)a0 semanticText:(id)a1;
- (void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;
- (BOOL)processAttribute:(id)a0 getSubstring:(id *)a1 advanceCursor:(BOOL)a2 markAsSemanticError:(BOOL)a3 error:(id *)a4;

@end
