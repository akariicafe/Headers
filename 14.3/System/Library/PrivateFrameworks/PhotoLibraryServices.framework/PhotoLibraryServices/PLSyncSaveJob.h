@class NSNumber, NSString, NSSet, NSURL, NSDate, CLLocation, NSArray;

@interface PLSyncSaveJob : NSObject

@property (retain, nonatomic) NSURL *originalAssetURL;
@property (nonatomic) BOOL hasVideoComplement;
@property (retain, nonatomic) NSURL *videoComplementURL;
@property (nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSSet *albumURIs;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *facesInfo;
@property (retain, nonatomic) NSNumber *sortToken;
@property (retain, nonatomic) NSString *originalFileName;
@property (nonatomic) BOOL isSyncComplete;
@property (nonatomic) BOOL cleanupSyncState;
@property (copy, nonatomic) NSDate *cleanupBeforeDate;
@property (copy, nonatomic) id /* block */ finishedBlock;

- (void).cxx_destruct;
- (id)description;
- (void)processFacesWithBlock:(id /* block */)a0;
- (id)initFromSerializedData:(id)a0;
- (id)serializedData;

@end
