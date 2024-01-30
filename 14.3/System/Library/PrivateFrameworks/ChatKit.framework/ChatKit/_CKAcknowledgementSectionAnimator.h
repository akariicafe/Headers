@class CKEntity, UIImageView, UICollectionViewLayoutAttributes, UILabel, UIView, CNAvatarView;

@interface _CKAcknowledgementSectionAnimator : NSObject

@property (retain, nonatomic) UICollectionViewLayoutAttributes *avatarViewAttr;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UILabel *voteCountLabel;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountViewAttr;
@property (retain, nonatomic) UIImageView *ackIconView;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconViewAttr;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long ackVoteCount;
@property (retain, nonatomic) CKEntity *entityToShow;
@property (nonatomic) long long acknowledgmentType;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateAckIconViewDelayTime:(double)a0;
- (void)_updateAvatarViewDelayTime:(double)a0;
- (void)_updateVoteCountViewDelayTime:(double)a0;
- (void)animateInAckIconView:(double)a0;
- (void)insertAvatarDelayTime:(double)a0;

@end
