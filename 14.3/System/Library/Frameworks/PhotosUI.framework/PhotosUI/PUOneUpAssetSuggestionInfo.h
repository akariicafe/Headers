@class NSProgress, PUOneUpSuggestion, PXContextualNotification;

@interface PUOneUpAssetSuggestionInfo : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PUOneUpSuggestion *suggestion;
@property (retain, nonatomic) PXContextualNotification *contextualNotification;

- (void).cxx_destruct;

@end
