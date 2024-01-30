@class NSArray, NSString, EMFEmojiLocaleData, NSLocale, NSObject;
@protocol OS_dispatch_queue, TUIEmojiSearchSourceDelegate;

@interface TUIEmojiSearchSource : NSObject {
    NSString *_exactQuery;
    NSString *_autocorrectedQuery;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) EMFEmojiLocaleData *localeData;
@property (weak, nonatomic) id<TUIEmojiSearchSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSArray *suggestedEmojis;
@property (retain, nonatomic) NSArray *multilingualSearchLocales;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldSupplyVerbatimResultsFor:(id)a0;
- (void)_deliverResults:(id)a0 forExactQuery:(id)a1 autocorrectedQuery:(id)a2;
- (id)_emojiResultSetForExactQuery:(id)a0 autocorrectedQuery:(id)a1;
- (id)_filteredTokensIgnoringModifiers:(id)a0;
- (id)_repeatSearchQuery:(id)a0 forLocales:(id)a1;
- (void)beginSearchForExactQuery:(id)a0 autocorrectedQuery:(id)a1;
- (id)languagesForMultilingualSearch;

@end
