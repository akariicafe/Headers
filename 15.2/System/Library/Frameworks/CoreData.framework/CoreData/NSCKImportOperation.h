@class NSUUID, NSSet, NSData, NSDate;

@interface NSCKImportOperation : NSManagedObject

@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSUUID *operationUUID;
@property (retain, nonatomic) NSData *changeTokenBytes;
@property (retain, nonatomic) NSSet *pendingRelationships;

@end
