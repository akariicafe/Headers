@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;

@end
