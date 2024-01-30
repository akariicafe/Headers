@class SHMetadataMO, NSArray, NSString, NSURL, NSDate, SHGroupMO;

@interface SHTrackMO : NSManagedObject

@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSArray *labels;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *recognitionID;
@property (copy, nonatomic) NSString *shazamKey;
@property (copy, nonatomic) NSURL *shazamURL;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *syncID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SHGroupMO *group;
@property (retain, nonatomic) SHMetadataMO *metadata;

+ (id)fetchRequest;

@end
