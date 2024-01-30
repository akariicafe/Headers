@class NSUUID, MKFCKHome, MKFCKPhotosPerson;

@interface MKFCKHomePerson : MKFCKPerson

@property (copy, nonatomic) NSUUID *linkedSharedPhotosPersonModelID;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKPhotosPerson *linkedPhotosPerson;

+ (id)fetchRequest;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
