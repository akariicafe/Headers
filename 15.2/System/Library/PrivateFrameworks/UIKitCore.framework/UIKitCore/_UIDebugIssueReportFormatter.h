@class NSString;

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *noIssuesDescription;
@property (copy, nonatomic) NSString *defaultIssuePrefix;

- (void).cxx_destruct;
- (id)init;
- (id)stringFromReport:(id)a0;
- (id)_componentsFromReport:(id)a0;

@end
