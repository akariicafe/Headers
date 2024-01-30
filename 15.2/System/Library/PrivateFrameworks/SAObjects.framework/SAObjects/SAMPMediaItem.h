@class NSString, SAMPReleaseInfo, NSNumber, SACalendar;

@interface SAMPMediaItem : SAMPMediaEntity

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (retain, nonatomic) SACalendar *datePurchased;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *perceivableStartTimeInSeconds;
@property (retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property (copy, nonatomic) NSString *sortAlbum;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)mediaItem;
+ (id)mediaItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
