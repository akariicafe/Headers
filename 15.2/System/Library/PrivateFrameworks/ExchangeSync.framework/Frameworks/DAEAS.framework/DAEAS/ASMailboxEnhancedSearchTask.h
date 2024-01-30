@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask {
    NSString *_searchId;
}

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (void)performTask;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (BOOL)requiresEASVersionInformaton;
- (void)_appendSearchQuery:(id)a0;
- (void)_appendSearchOptions:(id)a0;
- (id)replacementObjectForEmailItem:(id)a0;

@end
