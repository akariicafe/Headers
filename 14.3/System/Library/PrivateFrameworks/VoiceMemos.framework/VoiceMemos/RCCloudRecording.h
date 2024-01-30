@class NSData, NSString, NSDate, NSPredicate, NSURL, CLLocation, NSNumber, AVAsset;
@protocol _NSFileBackedFuture, RCFolder;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording>

@property (class, readonly) NSPredicate *playablePredicate;
@property (class, readonly) NSPredicate *cacheDeletedOnWatchPredicate;
@property (class, readonly) NSPredicate *favoritePredicate;
@property (class, readonly) NSPredicate *watchOSPredicate;
@property (class, readonly) NSPredicate *musicMemoPredicate;

@property (retain, nonatomic) NSString *encryptedTitle;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long sharedFlags;
@property (retain, nonatomic) NSData *audioDigest;
@property (retain, nonatomic) id<_NSFileBackedFuture> audioFuture;
@property (retain, nonatomic) AVAsset *avAsset;
@property (readonly, nonatomic) NSNumber *purgeableAudioFileSize;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *evictionDate;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double duration;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) long long iTunesPersistentID;
@property (nonatomic) BOOL synced;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (nonatomic) BOOL manuallyRenamed;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL recordedOnWatch;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL enhanced;
@property (nonatomic) BOOL watchOS;
@property (nonatomic) BOOL musicMemo;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, nonatomic) id<RCFolder> folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)a0;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)a0;
+ (BOOL)isRecordingPurgeable:(id)a0;
+ (BOOL)setPurgeable:(BOOL)a0 recordingURL:(id)a1 error:(id *)a2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)willSave;
- (id)_activityURLCreateIfNecessary:(BOOL)a0;
- (void)awakeFromInsert;
- (BOOL)copyPropertiesFromOriginalRecording:(id)a0 error:(id *)a1;
- (id)searchableItem;
- (void)setName:(id)a0;
- (id)path;
- (BOOL)validateForUpdate:(id *)a0;
- (id)_labelAllowingEmptyString:(BOOL)a0;
- (void).cxx_destruct;
- (void)synchronizeRecordingMetadata;
- (id)purgeAudioFileWithModel:(id)a0 error:(id *)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (BOOL)synchronizeWithExistingAudioFuture:(id *)a0;
- (id)_detailLabel;
- (void)_validatePath;
- (void)setEvictionDate:(id)a0;
- (id)itemForActivityType:(id)a0;
- (void)awakeFromFetch;
- (id)name;
- (void)_updateAudioFuture:(id)a0;
- (void)setPath:(id)a0;
- (id)subjectForActivityType:(id)a0;
- (BOOL)validateForInsert:(id *)a0;
- (void)setDuration:(double)a0;

@end
