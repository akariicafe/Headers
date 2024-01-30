@class CallDBMigrator;

@interface CHMigrator : NSObject {
    CallDBMigrator *_migrator;
}

- (id)init;
- (void).cxx_destruct;
- (void)migrate:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
