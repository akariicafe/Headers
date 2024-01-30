@class NSArray, PDFView, QLDelegateProxy, NSString;
@protocol PDFViewDelegatePrivate, QLFindOnPageNavigatorInterfaceHandler, QLFindOnPageStringMatcher;

@interface QLPDFFindOnPageNavigator : NSObject <PDFViewDelegatePrivate, QLFindOnPageNavigator>

@property (nonatomic) unsigned long long numberOfResults;
@property (nonatomic) unsigned long long currentResultIndex;
@property (retain, nonatomic) id<QLFindOnPageStringMatcher> stringMatcher;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSArray *matches;
@property (retain, nonatomic) PDFView *pdfView;
@property (retain, nonatomic) QLDelegateProxy<PDFViewDelegatePrivate> *delegateProxy;
@property (nonatomic) long long originalKeyboardDismissMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<QLFindOnPageNavigatorInterfaceHandler> interfaceHandler;
@property (readonly, nonatomic) NSString *queryString;

- (void)_keyboardDidChangeFrame:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_navigateToResultForString:(id)a0 withOptions:(unsigned long long)a1 maximumCount:(unsigned long long)a2 toNext:(BOOL)a3;
- (BOOL)_previousSearchIsStillValidForString:(id)a0 withOptions:(long long)a1 maximumCount:(unsigned long long)a2;
- (void)_navigateToNext:(BOOL)a0;
- (void)_notifyInterfaceHandlerOfCurrentState;
- (void)_didFinishWithMatches:(id)a0 forString:(id)a1;
- (void)_navigateToFirst;
- (void)_resetNavigation;
- (void)_setAsDelegate;
- (void)_resetOriginalDelegate;
- (void)_scrollToSelection:(id)a0;
- (void)_navigateToMatchAtIndex:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pdfViewContentInset;
- (BOOL)_isDoneSearching;
- (void)navigateToNextResultForString:(id)a0 withOptions:(unsigned long long)a1 maximumCount:(unsigned long long)a2;
- (void)navigateToPreviousResultForString:(id)a0 withOptions:(unsigned long long)a1 maximumCount:(unsigned long long)a2;
- (void)prepareNavigation;
- (void)clearNavigation;
- (id)initWithStringMatcher:(id)a0 pdfView:(id)a1;

@end
