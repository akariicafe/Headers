@class NSString, SAMPPlaybackInfo, SACalendar;

@interface SAMPMediaEntity : SADomainObject

@property (copy, nonatomic) NSString *adamIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (retain, nonatomic) SACalendar *dateAdded;
@property (nonatomic) BOOL explicit;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *mediaType;
@property (retain, nonatomic) SAMPPlaybackInfo *playbackInfo;
@property (copy, nonatomic) NSString *rawPlaybackInfo;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *sortTitle;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL unplayable;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
