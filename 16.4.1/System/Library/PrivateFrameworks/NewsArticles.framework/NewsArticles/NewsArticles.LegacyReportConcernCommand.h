@interface NewsArticles.LegacyReportConcernCommand : FCCommand {
    void /* unknown type, empty encoding */ concern;
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ comments;
}

- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
