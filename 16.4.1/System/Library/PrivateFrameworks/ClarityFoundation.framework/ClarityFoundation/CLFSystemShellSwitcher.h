@interface CLFSystemShellSwitcher : NSObject

@property (nonatomic, getter=isClarityBoardEnabled) BOOL clarityBoardEnabled;

- (BOOL)_createFileWithError:(id *)a0;
- (BOOL)_removeFileWithError:(id *)a0;
- (id)_directoryURL;
- (BOOL)setClarityBoardEnabled:(BOOL)a0 error:(id *)a1;

@end
