@class NSString, AVAsset, NSURL, NSDate, CSSearchableItem, CLLocation;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording> {
    AVAsset *_avAsset;
    BOOL _pathWasInvalid;
    BOOL _ignoreChangeForEntityRevision;
}

@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) double duration;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) CSSearchableItem *searchableItem;
@property (nonatomic) long long recordingID;
@property (nonatomic) long long revisionID;
@property (readonly, nonatomic) BOOL hasPendingChangeAffectingEntityRevision;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *deletionDate;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double length;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (nonatomic) BOOL manuallyRenamed;
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
@property (readonly, copy, nonatomic) NSString *userFolderUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableItemIdentifierForSavedRecordingURI:(id)a0;
+ (id)localizedStringForRecordingLabel:(long long)a0;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)a0;
+ (id)propertiesAffectingEntityRevision;

- (void)awakeFromFetch;
- (void)willSave;
- (void)awakeFromInsert;
- (id)path;
- (void)setPath:(id)a0;
- (double)duration;
- (id)_labelAllowingEmptyString:(BOOL)a0;
- (id)copyResourcesForSharingIntoDirectory:(id)a0;
- (void)_validatePath;
- (id)subjectForActivityType:(id)a0;
- (id)title;
- (id)label;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (void)willChangeValueForKey:(id)a0;
- (id)detailLabel;
- (void)setLabelPreset:(long long)a0;
- (long long)labelPreset;

@end
