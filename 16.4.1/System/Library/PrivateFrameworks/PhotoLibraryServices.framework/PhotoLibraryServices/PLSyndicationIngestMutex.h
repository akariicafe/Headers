@class PLDatabaseContext, NSDate, PLPhotoLibrary;

@interface PLSyndicationIngestMutex : NSObject {
    PLDatabaseContext *_databaseContext;
    PLPhotoLibrary *_syndicationIngestLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syndicationIngestLibraryLock;
    unsigned char _syndicationIngestClientIdentifier;
    unsigned char _requestedSyndicationIngestClientIdentifier;
    NSDate *_syndicationIngestLibraryUsageStart;
}

- (id)syndicationIngestMutexStateDescription;
- (BOOL)shouldStopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)a0;
- (void)stopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)a0;
- (id)initWithDatabaseContext:(id)a0;
- (id)_obtainSyndicationIngestLibraryIfPossibleWithIdentifier:(unsigned char)a0;
- (void).cxx_destruct;
- (id)tryUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)a0;

@end
