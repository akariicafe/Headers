@class NSString, TSWPSelection;

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {
    TSWPSelection *_selection;
    NSString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)delta;
- (void)dealloc;
- (unsigned long long)targetCharIndex;
- (id)initWithSelection:(id)a0 string:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertedRange;
- (void)performWithStorage:(id)a0 delta:(long long)a1 undoTransaction:(struct TSWPStorageTransaction { } *)a2 replaceBlock:(id /* block */)a3;

@end
