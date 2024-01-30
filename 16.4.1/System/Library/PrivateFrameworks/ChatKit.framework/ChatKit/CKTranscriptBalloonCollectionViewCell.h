@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) long long animationPauseReasons;

+ (id)reuseIdentifier;

- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (id)description;
- (void).cxx_destruct;
- (id)_balloonViewForChatItem:(id)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;

@end
