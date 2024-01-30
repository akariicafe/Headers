@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSURL *_url;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
}

@property (retain, nonatomic) CoreDAVResponseItem *responseItem;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1 primaryPropertiesToSet:(id)a2 fallbackPropertiesToSet:(id)a3 atURL:(id)a4;
- (void)_proppatchAfterFailureCount:(unsigned long long)a0;

@end
