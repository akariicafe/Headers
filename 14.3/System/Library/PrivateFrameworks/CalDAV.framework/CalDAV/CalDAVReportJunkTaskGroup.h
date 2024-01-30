@class NSArray;

@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup {
    NSArray *_resourceURLs;
}

- (void).cxx_destruct;
- (void)startTaskGroup;
- (id)initWithResourceURLs:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;

@end
