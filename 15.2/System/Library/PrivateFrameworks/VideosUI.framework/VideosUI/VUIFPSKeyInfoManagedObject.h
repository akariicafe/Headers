@class NSString, VUIVideoManagedObject, NSData, NSDate, NSURL, NSNumber;

@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (nonatomic) BOOL allowsManualRenewal;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) BOOL isLowValue;
@property (retain, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSURL *keyURI;
@property (copy, nonatomic) NSNumber *playbackDuration;
@property (copy, nonatomic) NSDate *playbackExpirationStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSNumber *renewalInterval;
@property (copy, nonatomic) NSDate *retrievalDate;
@property (retain, nonatomic) VUIVideoManagedObject *video;

+ (id)fetchRequest;

- (void)populateFromKeyRequest:(id)a0 video:(id)a1;

@end
