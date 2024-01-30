@interface NewsArticles.ReportConcernCommand : FCCommand {
    void /* unknown type, empty encoding */ concern;
    void /* unknown type, empty encoding */ selectedSubConcerns;
    void /* unknown type, empty encoding */ headline;
}

- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
