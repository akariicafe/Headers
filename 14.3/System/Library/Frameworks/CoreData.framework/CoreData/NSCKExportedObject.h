@class NSString, NSNumber, NSCKExportOperation;

@interface NSCKExportedObject : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *changeTypeNum;
@property (retain, nonatomic) NSNumber *typeNum;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic) long long changeType;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSCKExportOperation *operation;

@end
