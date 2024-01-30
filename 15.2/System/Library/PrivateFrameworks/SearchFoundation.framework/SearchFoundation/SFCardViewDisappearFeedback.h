@class SFCard;

@interface SFCardViewDisappearFeedback : SFFeedback

@property (readonly, nonatomic) SFCard *card;
@property (nonatomic) unsigned long long cardDisappearEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithEvent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCard:(id)a0 event:(unsigned long long)a1;

@end
