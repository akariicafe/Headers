@class NSArray;

@interface PUIReportWebsiteListController : PSListController

@property (retain, nonatomic) NSArray *cachedSpecifiers;
@property (nonatomic) BOOL alphabeticalSort;

+ (id)websiteSpecifiersFromResults:(id)a0 showDetail:(BOOL)a1;
+ (BOOL)websiteSpecifiersWithLimit:(unsigned long long)a0 showDetail:(BOOL)a1 completion:(id /* block */)a2;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)sortByWasTapped;
- (void)dataDidChange;

@end
