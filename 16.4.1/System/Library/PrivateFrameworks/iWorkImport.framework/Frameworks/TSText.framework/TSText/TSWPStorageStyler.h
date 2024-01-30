@class TSWPStorage;

@interface TSWPStorageStyler : NSObject

@property (retain, nonatomic) TSWPStorage *storage;
@property (nonatomic) unsigned long long attributeArrayKind;

- (void).cxx_destruct;
- (id)replacementStyleForStyle:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)applyStyle:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 undoTransaction:(struct TSWPStorageTransaction { } *)a2;
- (id)initWithStorage:(id)a0 attributeArrayKind:(unsigned long long)a1;
- (void)performStylingInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 undoTransaction:(struct TSWPStorageTransaction { } *)a1;

@end
