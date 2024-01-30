@class NSDate, NSString, NSURL, SHShazamKey, NSSet, NSMutableSet, CLLocation, SHMediaLibraryItemMetadata;

@interface SHMediaLibraryTrack : NSObject <SHMediaLibraryItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *labelSet;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSURL *artworkURL;
@property (retain, nonatomic) NSURL *shazamURL;
@property (retain, nonatomic) SHShazamKey *shazamKey;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (copy, nonatomic) NSString *recognitionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *associatedGroupIdentifier;
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) NSSet *labels;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SHMediaLibraryItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)libraryTrackFromMediaItem:(id)a0;
+ (void)updateLibraryTrack:(id)a0 withMediaItem:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addLabel:(id)a0;
- (id)_initWithIdentifier:(id)a0 metadata:(id)a1 labels:(id)a2;
- (void)addPlatformLabel;
- (id)initWithIdentifier:(id)a0 builder:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 builder:(id /* block */)a2;
- (BOOL)isEqualTrack:(id)a0;
- (id)platformLabel;
- (void)updateWithBuilderBlock:(id /* block */)a0;

@end
