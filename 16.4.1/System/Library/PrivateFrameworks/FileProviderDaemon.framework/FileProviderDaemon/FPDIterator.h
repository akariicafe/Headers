@class NSError;

@interface FPDIterator : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long numFoldersPopped;
@property (readonly, nonatomic) BOOL done;
@property (nonatomic) BOOL skipMaterializedTreeTraversal;
@property (nonatomic) BOOL shouldDecorateItems;

+ (id)hybridIteratorForItem:(id)a0 domain:(id)a1 enforceFPItem:(BOOL)a2;
+ (id)iteratorForLocator:(id)a0 manager:(id)a1;
+ (id)iteratorForLocator:(id)a0 provider:(id)a1;
+ (id)iteratorForLocator:(id)a0 wantsDisk:(BOOL)a1 provider:(id)a2;

- (id)nextItem;
- (void).cxx_destruct;
- (id)nextWithError:(id *)a0;

@end
