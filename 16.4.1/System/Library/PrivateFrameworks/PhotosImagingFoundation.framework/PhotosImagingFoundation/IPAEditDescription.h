@class NSString, NSArray;

@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration> {
    NSArray *_operations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)containsValidOperations:(id)a0;
+ (Class)expectedOperationClass;
+ (unsigned long long)insertIndexForOperationWithIdentifier:(id)a0 inArray:(id)a1 withOrdering:(id)a2;
+ (id)presetifyAdjustmentStack:(id)a0;
+ (id)sortOperations:(id)a0 withOrdering:(id)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)operations;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperations:(id)a0;
- (unsigned long long)operationCount;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToDescription:(id)a0;
- (id)_operations;
- (id)archivalRepresentation;
- (id)descriptionByRemovingOperation:(id)a0;
- (id)_debugDescriptionSuffix;
- (id)_operationAtIndex:(unsigned long long)a0;
- (BOOL)containsOperationWithIdentifier:(id)a0;
- (id)descriptionByAddingOperation:(id)a0;
- (id)descriptionByAddingOperation:(id)a0 atIndex:(unsigned long long)a1;
- (id)descriptionByRemovingOperationAtIndex:(unsigned long long)a0;
- (id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)a0;
- (id)descriptionByReplacingOperation:(id)a0 atIndex:(unsigned long long)a1;
- (id)descriptionWithOperations:(id)a0;
- (id)descriptionWithOperationsUpToUUID:(id)a0;
- (unsigned long long)firstIndexOfOperationWithIdentifier:(id)a0;
- (id)firstOperationWithIdentifier:(id)a0;
- (void)forEachImmutableOperation:(id /* block */)a0;
- (unsigned long long)indexOfOperationWithUUID:(id)a0;
- (unsigned long long)insertIndexForOperationWithIdentifier:(id)a0;
- (BOOL)isEqualToDescriptionRenderOperations:(id)a0;
- (id)operationAtIndex:(unsigned long long)a0;
- (id)operationWithUUID:(id)a0;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)a0;
- (void)withImmutableOperationAtIndex:(unsigned long long)a0 block:(id /* block */)a1;

@end
