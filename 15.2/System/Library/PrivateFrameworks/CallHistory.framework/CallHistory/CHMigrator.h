@class CallDBMigrator;

@interface CHMigrator : NSObject {
    CallDBMigrator *_migrator;
}

- (void).cxx_destruct;
- (id)init;
- (void)migrate:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
