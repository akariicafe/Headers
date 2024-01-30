@class NSString, NSNumber, NSCKImportOperation;

@interface NSCKImportPendingRelationship : NSManagedObject

@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSCKImportOperation *operation;

+ (id)insertPendingRelationshipForFailedRelationship:(id)a0 forOperation:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3;
+ (id)entityPath;

@end
