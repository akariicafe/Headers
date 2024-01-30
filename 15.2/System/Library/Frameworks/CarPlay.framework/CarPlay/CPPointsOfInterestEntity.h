@class NSString, NSArray;

@interface CPPointsOfInterestEntity : CPEntity <NSSecureCoding, CPPointsOfInterestProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *pointsOfInterest;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)objectForIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 pointsOfInterest:(id)a1;

@end
