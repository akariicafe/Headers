@class NSDate, NSString, NSArray, PFUbiquityKnowledgeVector, PFUbiquityImportContext, NSDictionary, NSManagedObject, NSMutableDictionary, NSNumber;

@interface PFUbiquityRecordImportConflict : NSObject {
    NSString *_conflictingObjectGlobalIDStr;
    NSManagedObject *_sourceObject;
    NSDictionary *_conflictingLogContent;
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    int _conflictingLogTransactionType;
    NSDate *_conflictLogDate;
    NSNumber *_conflictingLogTransactionNumber;
    NSArray *_transactionHistory;
    NSDictionary *_globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext *_importContext;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)a0 withValue:(id)a1 withGlobalIDToLocalIDURIMap:(id)a2 andTransactionLog:(id)a3;

@end
