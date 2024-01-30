@class PHPhotoLibrary, NSString, NSSet;
@protocol CLSFaceIdentificationProtocol;

@interface PGShareBackFacesSource : PGShareBackSource {
    PHPhotoLibrary *_photoLibrary;
    NSString *_meLocalIdentifier;
    NSSet *_personLocalIdentifiersToCheck;
    id<CLSFaceIdentificationProtocol> _faceIdentification;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1 faceIdentification:(id)a2;
- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;

@end
