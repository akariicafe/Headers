@interface PVFaceIDModel : NSObject

+ (BOOL)addFaceObservations:(id)a0 forPersonIdentifier:(id)a1 toModel:(id)a2 error:(id *)a3;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)faceObservationFromFaceprintData:(id)a0;
+ (id)modelFileName;
+ (id)newMutablePersonsModel;
+ (id)defaultConfiguration;
+ (id)classifyFaceObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (id)loadModelAtPath:(id)a0 error:(id *)a1;

@end
