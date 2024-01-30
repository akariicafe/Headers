@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler {
    int _exitCode;
}

- (BOOL)handleSqliteError:(int)a0 error:(id)a1 onError:(id /* block */)a2 db:(id)a3;
- (id)initWithExitCode:(int)a0;
- (void)exitOnErrorIndicatingIOError:(int)a0;

@end
