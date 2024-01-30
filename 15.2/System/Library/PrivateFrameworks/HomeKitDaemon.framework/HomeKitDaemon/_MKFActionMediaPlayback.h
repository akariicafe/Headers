@class NSUUID, NSString, NSArray, MKFActionMediaPlaybackDatabaseID, NSSet, NSDate, MPPlaybackArchive, Protocol, NSNumber;
@protocol MKFHome, MKFActionSet;

@interface _MKFActionMediaPlayback : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionMediaPlayback, MKFActionMediaPlaybackPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *services;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSSet *accessories_;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *services;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *volume;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) MKFActionMediaPlaybackDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfActionMediaPlayback;
- (void)addAccessoriesObject:(id)a0;
- (void)removeAccessoriesObject:(id)a0;

@end
