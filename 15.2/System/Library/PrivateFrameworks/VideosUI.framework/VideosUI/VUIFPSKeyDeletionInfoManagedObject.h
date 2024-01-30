@class NSString, NSData, NSDate, NSNumber, NSURL;

@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *additionalFPSRequestParamsJSONData;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSURL *fpsNonceURL;
@property (retain, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSURL *keyURI;
@property (copy, nonatomic) NSDate *playbackExpirationStartDate;

+ (id)fetchRequest;

@end
