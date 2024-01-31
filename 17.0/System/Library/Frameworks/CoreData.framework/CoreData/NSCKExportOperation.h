@class NSString, NSCKExportMetadata, NSSet, NSNumber;

@interface NSCKExportOperation : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSNumber *statusNum;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSCKExportMetadata *exportMetadata;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSSet *objects;

@end
