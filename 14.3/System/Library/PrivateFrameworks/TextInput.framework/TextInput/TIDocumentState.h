@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contextBeforeInput;
@property (readonly, nonatomic) NSString *markedText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) NSString *contextAfterInput;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeInMarkedText;

+ (id)_selectedTextByDeletingInteriorSentences:(id)a0;
+ (id)_string:(id)a0 byTrimmingWordsBeforeIndex:(unsigned long long)a1;
+ (id)_contextStringByTrimmingSuccedingLines:(id)a0;
+ (id)_contextStringByTrimmingPrecedingLines:(id)a0;
+ (id)documentStateWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)documentStateWithContextBefore:(id)a0 markedText:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 contextAfter:(id)a3;
+ (id)_string:(id)a0 byTrimmingWordsAfterIndex:(unsigned long long)a1;
+ (id)documentStateForTestingWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)documentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;
+ (id)unboundedDocumentStateForTestingWithContextBefore:(id)a0 selectedText:(id)a1 contextAfter:(id)a2;

- (id)initWithUnboundedContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 unboundedContextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithContextBefore:(id)a0 markedText:(id)a1 selectedText:(id)a2 contextAfter:(id)a3 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hashString:(id)a0 intoHashValue:(unsigned long long)a1;
- (id)documentStateAfterCollapsingSelection;
- (id)wordPrefixOfString:(id)a0 withTerminatorPredicate:(id /* block */)a1 reverse:(BOOL)a2;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)inputIndexWithTerminatorPredicate:(id /* block */)a0;
- (BOOL)deletingBackwardsWillRemoveText;
- (id)documentStateAfterInsertingTextAfterSelection:(id)a0;
- (id)documentStateAfterDeletingForward;
- (id)inputStemWithTerminatorPredicate:(id /* block */)a0;
- (id)documentStateAfterReplacingText:(id)a0 withText:(id)a1;
- (id)inputStringWithTerminatorPredicate:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)documentIsEmpty;
- (id)documentStateAfterInsertingText:(id)a0;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterSettingMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterCursorAdjustment:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
