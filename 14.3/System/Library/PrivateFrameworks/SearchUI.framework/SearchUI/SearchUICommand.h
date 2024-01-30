@class SearchUICommandEnvironment, SearchUIRowModel;

@interface SearchUICommand : NSObject

@property (retain, nonatomic) SearchUICommandEnvironment *commandEnvironment;
@property (retain, nonatomic) SearchUIRowModel *rowModel;

+ (id)tapCommandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)mainRowModelForRowModel:(id)a0;
+ (Class)supportedCommandClassForClasses:(id)a0 rowModel:(id)a1 environment:(id)a2;
+ (id)peekCommandForRowModel:(id)a0 environment:(id)a1;

- (void)sendResultFeedback;
- (unsigned long long)destination;
- (void).cxx_destruct;
- (id)generateCardViewControllerForPeek:(BOOL)a0;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)a0 performOpenIfSo:(BOOL)a1;
- (id)storeViewController;
- (id)resultEngagementFeedback;
- (id)cardSectionEngagementFeedback;
- (void)sendCardFeedback;
- (void)sendViewControllerFeedback;
- (id)initWithRowModel:(id)a0 environment:(id)a1;

@end
