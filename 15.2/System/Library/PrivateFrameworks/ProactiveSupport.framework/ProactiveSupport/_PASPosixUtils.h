@interface _PASPosixUtils : NSObject

+ (int)runCommandWithPath:(const char *)a0 argv:(const char **)a1 envp:(const char **)a2 handleStdout:(id /* block */)a3 handleStderr:(id /* block */)a4;
+ (int)runCommandWithPath:(const char *)a0 argv:(const char **)a1 envp:(const char **)a2 stdoutData:(id *)a3 stderrData:(id *)a4;

@end
