@class NSString, BCReadingNowDetail, NSDate, NSNumber;

@interface BDSBookWidgetInfoMO : NSManagedObject

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *cloudAssetType;
@property (copy, nonatomic) NSString *libraryContentAssetType;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageProgressionDirection;
@property (copy, nonatomic) NSNumber *totalDuration;
@property (readonly, copy, nonatomic) NSDate *lastEngagedDate;
@property (readonly, nonatomic) BOOL isTrackedAsRecent;
@property (retain, nonatomic) BCReadingNowDetail *readingNowDetail;
@property (nonatomic) BOOL isExplicit;

+ (id)fetchRequest;

- (id)initIntoManagedObjectContext:(id)a0;
- (id)getBookWidgetInfoObject;

@end
