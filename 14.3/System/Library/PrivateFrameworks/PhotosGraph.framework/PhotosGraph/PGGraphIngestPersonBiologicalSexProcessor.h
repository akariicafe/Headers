@class NSString;

@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)processPersonBiologicalSexForPersonNodes:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)_writeBiologicalSexByPerson:(id)a0 toPhotoLibrary:(id)a1;
- (unsigned short)_phBiologicalSexFromIngestBiologicalSex:(unsigned long long)a0;
- (unsigned long long)_sexForPersonNode:(id)a0 graph:(id)a1;
- (unsigned long long)sexForFaces:(id)a0 personDescription:(id)a1;
- (id)_sexDescriptionForBiologicalSex:(unsigned long long)a0;

@end
