@class SearchUICommandEnvironment, SearchUIRowModel, SFCommand;

@interface SearchUICommand : NSObject

@property (retain, nonatomic) SearchUICommandEnvironment *commandEnvironment;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) SFCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)tapCommandForRowModel:(id)a0 command:(id)a1 environment:(id)a2;
+ (id)mainRowModelForRowModel:(id)a0;
+ (Class)supportedCommandClassForClasses:(id)a0 rowModel:(id)a1 environment:(id)a2;
+ (id)tapCommandForRowModel:(id)a0 environment:(id)a1;
+ (id)peekCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)resultEngagementFeedback;
- (void).cxx_destruct;
- (id)cardSectionEngagementFeedback;
- (id)storeViewControllerWithIdentifier:(id)a0;
- (void)sendResultFeedback;
- (id)generateCardViewControllerForPeek:(BOOL)a0 withCard:(id)a1;
- (void)sendCardFeedback;
- (id)initWithRowModel:(id)a0 command:(id)a1 environment:(id)a2;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)a0 performOpenIfSo:(BOOL)a1;

@end
