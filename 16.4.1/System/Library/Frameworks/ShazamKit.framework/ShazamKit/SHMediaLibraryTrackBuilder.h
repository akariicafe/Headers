@class NSString, NSSet, NSURL, NSDate, CLLocation, SHShazamKey;

@interface SHMediaLibraryTrackBuilder : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *recognitionIdentifier;
@property (retain, nonatomic) SHShazamKey *shazamKey;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSURL *artworkURL;
@property (retain, nonatomic) NSURL *shazamURL;
@property (retain, nonatomic) NSSet *labels;

- (void).cxx_destruct;
- (id)initWithCreationDate:(id)a0;

@end
