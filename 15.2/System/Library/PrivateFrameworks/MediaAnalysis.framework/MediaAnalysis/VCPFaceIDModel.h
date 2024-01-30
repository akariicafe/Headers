@interface VCPFaceIDModel : NSObject

+ (BOOL)persistPetsModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)_loadPetsModelAtPath:(id)a0 error:(id *)a1;
+ (BOOL)addFaceObservations:(id)a0 forPersonIdentifier:(id)a1 toModel:(id)a2 error:(id *)a3;
+ (id)animalObservationFromAnimalprintData:(id)a0;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (float)petClassificationThreshold;
+ (id)faceObservationFromFaceprintData:(id)a0;
+ (id)petVIPModelFileName;
+ (id)newMutablePersonsModel;
+ (id)_loadModelAtPath:(id)a0 error:(id *)a1;
+ (id)classifyAnimalObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (id)personVIPModelFileName;
+ (id)classifyFaceObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (id)loadVIPModelAtPath:(id)a0 withVIPType:(unsigned long long)a1 error:(id *)a2;

@end
