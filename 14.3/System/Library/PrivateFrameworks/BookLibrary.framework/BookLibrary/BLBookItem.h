@class NSString, NSDictionary, NSURL, NSDate;

@interface BLBookItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *entry;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *temporaryIdentifier;
@property (copy, nonatomic) NSString *legacyUniqueIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (copy, nonatomic) NSString *publisherIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *feedURL;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *permlink;
@property (nonatomic) BOOL iTunesU;
@property (nonatomic, getter=isSample) BOOL sample;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *publicationVersion;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *folderName;
@property (nonatomic) long long purgePriority;
@property (retain, nonatomic) NSDate *lastUserAccessDate;
@property (copy, nonatomic) NSString *itunesuAssetID;
@property (copy, nonatomic) NSString *coverImagePath;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntry:(id)a0 basePath:(id)a1;
- (id)initWithPeristentIdentifier:(id)a0 permlink:(id)a1 title:(id)a2;
- (id)initWithEduCloudData:(id)a0 path:(id)a1;
- (void)_setCloudCoverImageData:(id)a0;
- (id)_cloudDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_cloudCoverImageData;
- (void)_setFileURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
