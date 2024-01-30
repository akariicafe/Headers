@class NSUUID, NSString, NSArray, NSDate, NSSet, MKFMediaPlaybackActionDatabaseID, MPPlaybackArchive, Protocol, NSNumber;
@protocol MKFHome, MKFActionSet;

@interface _MKFMediaPlaybackAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaPlaybackAction, MKFMediaPlaybackActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSSet *accessories_;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *volume;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) MKFMediaPlaybackActionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)addAccessoriesObject:(id)a0;
- (id)castIfMediaPlaybackAction;
- (void)removeAccessoriesObject:(id)a0;

@end
