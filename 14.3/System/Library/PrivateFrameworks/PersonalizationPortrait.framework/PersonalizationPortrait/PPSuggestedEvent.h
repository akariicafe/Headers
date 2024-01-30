@interface PPSuggestedEvent : PPScoredEvent

@property (readonly, nonatomic) unsigned char category;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPPEvent:(id)a0;
- (id)initWithPPEvent:(id)a0 score:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
