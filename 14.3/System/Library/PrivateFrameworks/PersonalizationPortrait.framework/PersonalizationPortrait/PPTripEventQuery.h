@interface PPTripEventQuery : PPEventQuery

@property (nonatomic) unsigned char tripOptions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
