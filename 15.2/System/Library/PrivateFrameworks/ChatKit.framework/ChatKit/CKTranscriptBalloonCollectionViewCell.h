@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) long long animationPauseReasons;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (id)description;
- (id)_balloonViewForChatItem:(id)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (void)clearFilters;

@end
