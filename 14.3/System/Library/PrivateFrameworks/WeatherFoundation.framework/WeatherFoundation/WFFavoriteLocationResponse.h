@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse

@property (readonly, nonatomic) NSArray *favoriteLocations;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 favorites:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
