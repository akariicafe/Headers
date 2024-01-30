@class NSString, TSWPSelection, TSWPChangeSession;

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction> {
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)delta;
- (void)dealloc;
- (unsigned long long)targetCharIndex;
- (id)initWithSelection:(id)a0 string:(id)a1 changeSession:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertedRange;
- (void)performWithStorage:(id)a0 delta:(long long)a1 undoTransaction:(void *)a2 replaceBlock:(id /* block */)a3;

@end
