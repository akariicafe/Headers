@class NSString, NSNumber, NSDate;

@interface BDSBookWidgetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *cloudAssetType;
@property (copy, nonatomic) NSString *libraryContentAssetType;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageProgressionDirection;
@property (copy, nonatomic) NSNumber *totalDuration;
@property (readonly, nonatomic) NSDate *lastEngagedDate;
@property (readonly, nonatomic) BOOL isTrackedAsRecent;
@property (nonatomic) BOOL isExplicit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetID:(id)a0;
- (id)initWithAssetID:(id)a0 title:(id)a1 coverURL:(id)a2 pageProgressionDirection:(id)a3 cloudAssetType:(id)a4 libraryContentAssetType:(id)a5;
- (id)initWithAssetID:(id)a0 title:(id)a1 coverURL:(id)a2 pageProgressionDirection:(id)a3 cloudAssetType:(id)a4 libraryContentAssetType:(id)a5 lastEngagedDate:(id)a6 isTrackedAsRecent:(BOOL)a7;
- (id)insertMatchingManagedObjectIntoContext:(id)a0;

@end
