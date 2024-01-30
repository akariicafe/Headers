@class SFCard;

@interface SFCardViewDisappearFeedback : SFFeedback

@property (readonly, nonatomic) SFCard *card;
@property (nonatomic) unsigned long long cardDisappearEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithEvent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCard:(id)a0 event:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
