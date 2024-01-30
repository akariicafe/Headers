@class PHPhotoLibrary, NSSet;
@protocol CLSFaceIdentificationProtocol;

@interface PGShareBackPetSource : PGShareBackSource {
    PHPhotoLibrary *_photoLibrary;
    NSSet *_petPersonLocalIdentifiersToCheck;
    id<CLSFaceIdentificationProtocol> _faceIdentification;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1 faceIdentification:(id)a2;
- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;

@end
