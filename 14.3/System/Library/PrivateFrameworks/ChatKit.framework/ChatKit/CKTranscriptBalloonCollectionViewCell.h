@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) long long animationPauseReasons;

+ (id)reuseIdentifier;

- (void)clearFilters;
- (void).cxx_destruct;
- (void)addFilter:(id)a0;
- (void)dealloc;
- (id)_balloonViewForChatItem:(id)a0;
- (void)prepareForReuse;
- (id)description;
- (void)layoutSubviews;
- (void)configureForChatItem:(id)a0;

@end
