@class NSString;

@interface HDConceptIndexer : NSObject <HDConceptIndexer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)indexSamplesForProfile:(id)a0 limit:(unsigned long long)a1 outIndexedSamplesCount:(long long *)a2 error:(id *)a3;
+ (BOOL)resetIndexManagerStateForProfile:(id)a0 withError:(id *)a1;
+ (id)stateWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)storeState:(id)a0 transaction:(id)a1 error:(id *)a2;

- (id)init;

@end
