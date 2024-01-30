@class PLModelMigratorLog, PLPhotoLibraryPathManager, PFTimedPerfCheck;

@interface PLModelMigratorPostProcessor : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    unsigned char _type;
    unsigned short _tag;
    PFTimedPerfCheck *_lifetimePerfCheck;
}

@property (nonatomic, getter=isSuccess) BOOL success;
@property (readonly) PLModelMigratorLog *logger;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_initialLog;
- (id)initWithPathManager:(id)a0 postMigrationType:(unsigned char)a1;
- (id)_generateActionTagHashBase;
- (id)_generateActionTagHash;

@end
