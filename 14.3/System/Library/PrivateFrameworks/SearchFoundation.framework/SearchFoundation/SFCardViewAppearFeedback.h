@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) unsigned int level;
@property (copy, nonatomic) NSString *fbr;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCard:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
