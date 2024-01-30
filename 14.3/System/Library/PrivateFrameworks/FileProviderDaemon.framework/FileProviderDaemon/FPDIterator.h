@class NSError;

@interface FPDIterator : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long numFoldersPopped;
@property (readonly, nonatomic) BOOL done;
@property (nonatomic) BOOL skipMaterializedTreeTraversal;
@property (nonatomic) BOOL shouldDecorateItems;

+ (id)iteratorForLocator:(id)a0 manager:(id)a1;
+ (id)iteratorForLocator:(id)a0 provider:(id)a1;

- (void).cxx_destruct;
- (id)nextItem;
- (id)nextWithError:(id *)a0;

@end
