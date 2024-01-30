@class NSArray, NSString, NSTextRange, NSTextLayoutManager, NSMutableArray;
@protocol NSTextContentManagerDelegate;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding> {
    NSTextLayoutManager *_primaryTextLayoutManager;
    _Atomic unsigned long long _transactionStack;
    NSMutableArray *_editHistory;
    NSMutableArray *_textLayoutManagers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<NSTextContentManagerDelegate> delegate;
@property (readonly, copy) NSArray *textLayoutManagers;
@property NSTextLayoutManager *primaryTextLayoutManager;
@property unsigned long long maximumNumberOfUncachedElements;
@property (readonly) BOOL hasEditingTransaction;
@property BOOL synchronizesTextLayoutManagersAutomatically;
@property BOOL synchronizesToBackingStoreAutomatically;
@property (readonly) NSTextRange *documentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addTextLayoutManager:(id)a0;
- (id)enumerateTextElementsFromLocation:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (void)removeTextLayoutManager:(id)a0;
- (BOOL)synchronizeTextLayoutManagers:(id /* block */)a0;
- (void)replaceCharactersInRange:(id)a0 withTextElements:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPrimaryTextLayoutManager:(id)a0;
- (id)textLayoutManagers;
- (id)primaryTextLayoutManager;
- (void)_incrementTransactionStack;
- (void)_decrementTransactionStack;
- (BOOL)synchronizeToBackingStore:(id /* block */)a0;
- (id)textElementsForRange:(id)a0;
- (void)performEditingTransactionWithBlock:(id /* block */)a0;
- (void)recordEditActionInRange:(id)a0 newTextRange:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (id)locationFromLocation:(id)a0 offset:(long long)a1;
- (BOOL)isCountableDataSource;
- (void)encodeWithCoder:(id)a0;

@end
