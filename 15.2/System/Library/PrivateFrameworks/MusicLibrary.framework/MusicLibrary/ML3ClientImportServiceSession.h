@class ML3ClientImportSessionConfiguration, ML3MusicLibrary, ML3DatabaseConnection;

@interface ML3ClientImportServiceSession : NSObject {
    void *_importSession;
    ML3DatabaseConnection *_databaseConnection;
    ML3MusicLibrary *_library;
    ML3ClientImportSessionConfiguration *_configuration;
}

- (BOOL)finish;
- (BOOL)begin;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLibrary:(id)a0 connection:(id)a1 configuration:(id)a2;
- (BOOL)addTrack:(id)a0 persistentID:(id *)a1;
- (BOOL)updateTrack:(id)a0 persistentID:(id *)a1;
- (BOOL)removeTrack:(id)a0 persistentID:(id *)a1;

@end
