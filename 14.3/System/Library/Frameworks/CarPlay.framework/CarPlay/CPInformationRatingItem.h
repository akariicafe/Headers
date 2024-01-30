@class NSNumber;

@interface CPInformationRatingItem : CPInformationItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *rating;
@property (readonly, nonatomic) NSNumber *maximumRating;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 detail:(id)a1;
- (void)_santizeRatingItem;
- (id)initWithRating:(id)a0 maximumRating:(id)a1 title:(id)a2 detail:(id)a3;

@end
