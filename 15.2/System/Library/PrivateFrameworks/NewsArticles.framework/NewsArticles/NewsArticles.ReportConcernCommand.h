@interface NewsArticles.ReportConcernCommand : FCCommand {
    void /* unknown type, empty encoding */ concern;
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ comments;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;

@end
