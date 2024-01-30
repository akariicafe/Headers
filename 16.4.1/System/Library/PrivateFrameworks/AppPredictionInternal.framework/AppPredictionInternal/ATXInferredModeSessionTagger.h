@interface ATXInferredModeSessionTagger : NSObject

- (id)biomeSessionFromScoredSession:(id)a0;
- (void)inferModesForLastDay;
- (void)inferModesForLastDayWithXPCActivity:(id)a0;

@end
