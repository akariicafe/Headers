@class NSString, NSNumber, BLJaliscoServerItem;

@interface BLJaliscoServerBookletItem : NSManagedObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *storeDownloadParameters;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) BLJaliscoServerItem *parentItem;

- (id)initIntoManagedObjectContext:(id)a0;

@end
