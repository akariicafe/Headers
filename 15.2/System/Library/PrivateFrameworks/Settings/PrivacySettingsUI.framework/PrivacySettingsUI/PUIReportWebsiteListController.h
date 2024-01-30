@class NSArray;

@interface PUIReportWebsiteListController : PSListController

@property (retain, nonatomic) NSArray *cachedSpecifiers;
@property (nonatomic) BOOL alphabeticalSort;

+ (BOOL)websiteSpecifiersWithLimit:(unsigned long long)a0 showDetail:(BOOL)a1 completion:(id /* block */)a2;
+ (id)websiteSpecifiersFromResults:(id)a0 showDetail:(BOOL)a1;

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)dataDidChange;
- (void)sortByWasTapped;

@end
