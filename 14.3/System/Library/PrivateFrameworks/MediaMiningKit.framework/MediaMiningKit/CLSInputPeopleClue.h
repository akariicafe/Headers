@class PHPhotoLibrary, CLSPersonIdentity;

@interface CLSInputPeopleClue : CLSInputClue

@property (retain, nonatomic) CLSPersonIdentity *person;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long numberOfFaces;

+ (id)clueWithPeopleUUID:(id)a0 inPhotoLibrary:(id)a1;
+ (id)cluesWithPeopleUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)cluesWithPeoples:(id)a0;
+ (id)clueWithPeople:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (id)name;
- (BOOL)isEqualToClue:(id)a0;

@end
