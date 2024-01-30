@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsReportWithNameSpace:(id)a0 andName:(id)a1;
- (void)addSupportedReport:(id)a0;

@end
