@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (BOOL)supportsReportWithNameSpace:(id)a0 andName:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addSupportedReport:(id)a0;

@end
