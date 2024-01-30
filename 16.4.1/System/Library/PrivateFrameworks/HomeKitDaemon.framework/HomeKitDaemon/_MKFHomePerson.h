@class NSUUID, NSString, NSDate, NSPredicate, Protocol, _MKFHome, MKFHomePersonDatabaseID, _MKFPhotosPerson;
@protocol MKFHome, MKFPhotosPerson;

@interface _MKFHomePerson : _MKFPerson <MKFHomePerson, MKFHomePersonPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFPhotosPerson *linkedPhotosPerson;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFPhotosPerson> linkedPhotosPerson;
@property (readonly, copy, nonatomic) MKFHomePersonDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)createHMPerson;
- (id)castIfHomePerson;
- (id)photosPersonForPersonLink:(id)a0;
- (void)updateWithHMPerson:(id)a0;

@end
