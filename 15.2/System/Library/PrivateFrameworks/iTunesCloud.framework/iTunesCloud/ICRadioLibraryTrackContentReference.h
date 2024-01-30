@class NSString, NSNumber;

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *albumArtistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSString *copyright;
@property (copy, nonatomic) NSNumber *discCount;
@property (copy, nonatomic) NSNumber *discNumber;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *genreName;
@property (copy, nonatomic, getter=isCompilation) NSNumber *compilation;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *storeAdamIdentifier;
@property (copy, nonatomic) NSNumber *storeCloudIdentifier;
@property (copy, nonatomic) NSNumber *trackCount;
@property (copy, nonatomic) NSNumber *trackNumber;
@property (copy, nonatomic) NSNumber *year;
@property (copy, nonatomic) NSString *universalCloudLibraryID;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)contentType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)matchDictionary;
- (id)rawContentDictionary;

@end
