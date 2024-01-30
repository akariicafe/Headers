@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject {
    BOOL _shouldSuspendWhenFinished;
}

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *offers;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;
@property (retain, nonatomic) NSArray *continuations;
@property (retain, nonatomic) NSArray *errors;
@property (retain, nonatomic) NSArray *validPurchases;

- (void)dealloc;
- (id)initWithItems:(id)a0;
- (void)setDocumentTargetIdentifier:(id)a0;
- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary { } *)a0;
- (id)_copyUniqueErrorsFromErrors:(id)a0;
- (id)_copyValidPurchasesForItems:(id)a0;
- (void)_validateItems;
- (id)copyContinuationsForPurchases:(id)a0;
- (id)copyFilteredItemsFromItems:(id)a0;
- (void /* function */ *)errorEqualCallback;
- (id)everythingFailedErrorForError:(id)a0;
- (id)initWithItems:(id)a0 offers:(id)a1;
- (id)mergedErrorForError:(id)a0 withCount:(long long)a1;
- (void)setPurchasesAndContinuationsFromPurchases:(id)a0;

@end
