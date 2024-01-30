@class NSUserDefaults, NSMutableSet;

@interface MSPLongLivedCKOpCache : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSMutableSet *currentOpIDs;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)_operationIDsByType;
- (id)_operationIDsForType:(id)a0;
- (void)_setOperationIDs:(id)a0 forType:(id)a1;
- (void)addOperation:(id)a0 forType:(id)a1;
- (BOOL)hasOperationID:(id)a0 forType:(id)a1;
- (BOOL)isAwareOfOperationID:(id)a0;
- (BOOL)isCurrentOperationID:(id)a0;
- (void)pruneOperationsToIDs:(id)a0;
- (void)removeOperation:(id)a0 forType:(id)a1;

@end
