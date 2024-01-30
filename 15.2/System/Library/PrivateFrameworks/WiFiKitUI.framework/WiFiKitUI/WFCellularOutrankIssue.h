@class NSString;

@interface WFCellularOutrankIssue : WFHealthIssue {
    BOOL _subtitleOnlyIssue;
    NSString *_issueShortTitle;
    NSString *_typeString;
    NSString *_issueTitle;
}

+ (id)cellularOutrankDownload;
+ (id)cellularOutrankPerformance;
+ (id)cellularOutrankSecurity;

- (id)typeString;
- (void).cxx_destruct;
- (id)issueShortTitle;
- (id)issueTitle;
- (BOOL)subtitleOnlyIssue;
- (id)initWithSubType:(unsigned long long)a0;
- (id)_titleForSubType:(unsigned long long)a0;
- (id)_cellularOutrankSubTypeToString:(unsigned long long)a0;

@end
