@interface PPTripEventQuery : PPEventQuery

@property (nonatomic) unsigned char tripOptions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
