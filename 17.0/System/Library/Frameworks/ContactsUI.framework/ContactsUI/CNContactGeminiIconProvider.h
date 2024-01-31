@class NSDictionary, CNGeminiResult;

@interface CNContactGeminiIconProvider : NSObject

@property (retain, nonatomic) NSDictionary *geminiIconDictionary;
@property (retain, nonatomic) CNGeminiResult *geminiResult;

- (void).cxx_destruct;
- (BOOL)_checkAvailableGeminiChannelsUpdatedForGeminiResult:(id)a0;
- (id)_simLabelImageWithLocalizedBadgeLabel:(id)a0;
- (id)geminiIconForGeminiChannelIdentifier:(id)a0;
- (void)updateGeminiIcons;

@end
