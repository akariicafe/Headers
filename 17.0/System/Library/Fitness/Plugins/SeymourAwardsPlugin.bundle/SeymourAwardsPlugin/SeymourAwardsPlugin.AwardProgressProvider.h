@interface SeymourAwardsPlugin.AwardProgressProvider : NSObject <ACHAchievementProgressProviding> {
    void /* unknown type, empty encoding */ queue;
}

- (id)providerIdentifier;
- (BOOL)providesProgressForTemplate:(id)a0;
- (void)requestAchievementProgressUpdatesForTemplates:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
