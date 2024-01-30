@class Protocol, NSUUID, NSString, NSData, NSDate, MKFShortcutActionDatabaseID;
@protocol MKFHome, MKFActionSet;

@interface _MKFShortcutAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFShortcutAction, MKFShortcutActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) MKFShortcutActionDatabaseID *databaseID;
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

- (id)castIfShortcutAction;

@end
