@class NSArray;

@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup {
    NSArray *_resourceURLs;
}

- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithResourceURLs:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;

@end
