@class NSProgress, PXContextualNotification;

@interface PUOneUpAssetSuggestionInfo : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PXContextualNotification *contextualNotification;

- (void).cxx_destruct;

@end
