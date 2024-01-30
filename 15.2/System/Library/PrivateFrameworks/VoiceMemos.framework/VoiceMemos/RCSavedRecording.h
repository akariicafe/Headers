@class NSString, AVAsset, NSURL, NSDate, CSSearchableItem, CLLocation;
@protocol RCFolder;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording> {
    AVAsset *_avAsset;
    BOOL _pathWasInvalid;
    BOOL _ignoreChangeForEntityRevision;
}

@property (readonly, copy, nonatomic) CSSearchableItem *searchableItem;
@property (nonatomic) long long recordingID;
@property (nonatomic) long long revisionID;
@property (readonly, nonatomic) BOOL hasPendingChangeAffectingEntityRevision;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) double duration;
@property (copy, nonatomic) NSDate *evictionDate;
@property (copy, nonatomic) NSString *path;
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
@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, nonatomic) AVAsset *avAsset;
@property (readonly, nonatomic) id<RCFolder> folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableItemIdentifierForSavedRecordingURI:(id)a0;
+ (id)propertiesAffectingEntityRevision;
+ (id)localizedStringForRecordingLabel:(long long)a0;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)a0;

- (id)detailLabel;
- (void)willChangeValueForKey:(id)a0;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)setPath:(id)a0;
- (id)title;
- (id)_labelAllowingEmptyString:(BOOL)a0;
- (void)willSave;
- (void)setDuration:(double)a0;
- (id)label;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (void)_validatePath;
- (id)itemForActivityType:(id)a0;
- (id)path;
- (id)subjectForActivityType:(id)a0;
- (void)setTitle:(id)a0;
- (void)setLabelPreset:(long long)a0;
- (long long)labelPreset;

@end
