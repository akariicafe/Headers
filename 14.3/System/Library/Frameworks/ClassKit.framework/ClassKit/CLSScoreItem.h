@interface CLSScoreItem : CLSActivityItem {
    double _score;
    double _maxScore;
}

@property (nonatomic) double score;
@property (nonatomic) double maxScore;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 score:(double)a2 maxScore:(double)a3;

@end
