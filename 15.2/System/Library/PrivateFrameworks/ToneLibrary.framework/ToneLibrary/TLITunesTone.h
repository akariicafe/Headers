@class NSString, NSNumber;

@interface TLITunesTone : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *genreName;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSNumber *syncIdentifier;
@property (readonly, nonatomic) unsigned long long storeItemIdentifier;
@property (readonly, nonatomic) NSString *storeFrontIdentifier;
@property (readonly, nonatomic, getter=isPurchased) BOOL purchased;
@property (readonly, nonatomic, getter=isRingtone) BOOL ringtone;
@property (readonly, nonatomic) NSString *artworkFile;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isProtectedContent) BOOL protectedContent;
@property (readonly, nonatomic, getter=isPrivateTone) BOOL privateTone;
@property (readonly, nonatomic) NSNumber *fadeInDurationNumber;
@property (readonly, nonatomic) NSNumber *fadeOutDurationNumber;

+ (id)_identifierForPropertyListRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPropertyListRepresentation:(id)a0 filePath:(id)a1;
- (BOOL)isDuplicateOfTone:(id)a0;
- (id)initWithToneStoreDownload:(id)a0;

@end
