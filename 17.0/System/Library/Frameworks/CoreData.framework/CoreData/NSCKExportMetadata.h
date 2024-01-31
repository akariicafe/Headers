@class NSString, NSPersistentHistoryToken, NSSet, NSDate;

@interface NSCKExportMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSDate *exportedAt;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) NSSet *operations;

@end
