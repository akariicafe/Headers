@interface PVExportHelper : NSObject

+ (id)_peopleClustersDictionaryForType:(unsigned long long)a0 withPhotoLibrary:(id)a1;
+ (BOOL)exportPhotoLibrary:(id)a0 toURL:(id)a1 forPeopleType:(unsigned long long)a2 error:(id *)a3;
+ (BOOL)snapshotPhotoLibrary:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
