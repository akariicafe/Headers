@class NSUUID, NSSet, NSData, NSDate;

@interface NSCKImportOperation : NSManagedObject

@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSUUID *operationUUID;
@property (retain, nonatomic) NSData *changeTokenBytes;
@property (retain, nonatomic) NSSet *pendingRelationships;

+ (id)fetchOperationWithIdentifier:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (BOOL)purgeFinishedImportOperationsInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)entityPath;
+ (id)fetchUnfinishedImportOperationsInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;

@end
