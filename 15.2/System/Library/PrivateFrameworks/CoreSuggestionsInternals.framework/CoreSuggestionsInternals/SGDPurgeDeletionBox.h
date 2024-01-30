@class NSMutableDictionary;

@interface SGDPurgeDeletionBox : NSObject

@property (retain, nonatomic) NSMutableDictionary *deleteUniqueIds;
@property (retain, nonatomic) NSMutableDictionary *purgeUniqueIds;
@property (retain, nonatomic) NSMutableDictionary *deleteDomainIds;

- (void)addDeletion:(id)a0 domainSelection:(id)a1;
- (void)addDeletion:(id)a0 uniqueIds:(id)a1;
- (void).cxx_destruct;
- (void)addPurge:(id)a0 uniqueIds:(id)a1;
- (id)init;
- (BOOL)shouldRunHandlerImmediately;

@end
