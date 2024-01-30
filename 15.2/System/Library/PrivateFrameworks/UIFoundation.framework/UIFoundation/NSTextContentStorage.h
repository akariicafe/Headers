@class NSCountableTextRange, NSString, NSTextStorage, NSRunStorage, NSAttributedString, NSStorage;
@protocol NSTextContentStorageDelegate;

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageObserving> {
    NSAttributedString *_attributedString;
    NSTextStorage *_textStorage;
    NSCountableTextRange *_documentRange;
    NSRunStorage *_indexTable;
    NSStorage *_elements;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _modifiedRange;
    long long _modifiedDocumentLengthDelta;
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    long long _editedDelta;
    unsigned long long _editedMask;
    BOOL _notifyingToFixSelection;
    struct { id *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; id x2[64]; long long x3; struct _NSRange { unsigned long long x0; unsigned long long x1; } x4; unsigned long long x5; long long x6; BOOL x7; BOOL x8; } *_activeEnumerationCache;
}

@property (readonly) NSCountableTextRange *documentRange;
@property (weak) id<NSTextContentStorageDelegate> delegate;
@property (copy) NSAttributedString *attributedString;
@property (retain, nonatomic) NSTextStorage *textStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setAttributedString:(id)a0;
- (id)attributedString;
- (id)textStorage;
- (void)performEditingTransactionForTextStorage:(id)a0 usingBlock:(id /* block */)a1;
- (void)_commonInitialization;
- (id)attributedStringForTextElements:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)textElementsForAttributedString:(id)a0;
- (id)attributedStringForTextElement:(id)a0;
- (void)synchronizeTextLayoutManagers:(id /* block */)a0;
- (id)locationFromLocation:(id)a0 offset:(long long)a1;
- (BOOL)_supportsTextAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateRangesForTextElement:(id)a0 locationDelta:(long long)a1;
- (BOOL)isCountableDataSource;
- (void)setDelegate:(id)a0;
- (void)endEditingTransaction;
- (void)replaceContentsInRange:(id)a0 withTextElements:(id)a1;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)performEditingTransactionForTextStorage:(id)a0 withBlock:(id /* block */)a1;
- (id)locationFromLocation:(id)a0 withOffset:(long long)a1;
- (void)beginEditingTransaction;
- (id)init;
- (id)delegate;
- (id)textElementForAttributedString:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (void)setTextStorage:(id)a0;
- (id)enumerateTextElementsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)adjustedRangeFromRange:(id)a0 forEditingTextSelection:(BOOL)a1;
- (BOOL)_supportsTextAttributes:(id)a0;
- (void)dealloc;
- (void)synchronizeToBackingStore:(id /* block */)a0;

@end
