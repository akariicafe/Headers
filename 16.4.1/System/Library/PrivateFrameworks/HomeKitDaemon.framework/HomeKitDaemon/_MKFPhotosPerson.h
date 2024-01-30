@class NSUUID, NSString, NSDate, NSPredicate, MKFPhotosPersonDatabaseID, Protocol, _MKFUser, _MKFHomePerson;
@protocol MKFHomePerson, MKFUser, MKFHome;

@interface _MKFPhotosPerson : _MKFPerson <MKFPhotosPerson, MKFPhotosPersonPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) _MKFHomePerson *linkedHomePerson;
@property (retain, nonatomic) _MKFUser *user;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) id<MKFHomePerson> linkedHomePerson;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFPhotosPersonDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)createHMPerson;
- (id)castIfPhotosPerson;
- (void)updateWithHMPerson:(id)a0;

@end
