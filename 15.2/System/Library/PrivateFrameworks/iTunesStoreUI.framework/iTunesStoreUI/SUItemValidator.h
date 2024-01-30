@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject {
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property (readonly, nonatomic) NSArray *validationTests;

- (void)dealloc;
- (BOOL)validateItems:(id)a0 offers:(id)a1 error:(id *)a2;
- (void)addCollectionValidationTests:(id)a0;
- (void)addItemValidationTests:(id)a0;
- (void)removeValidationTest:(id)a0;
- (BOOL)validateItems:(id)a0 error:(id *)a1;

@end
