@interface WFSiriPunchOutResponse : WFSiriActionResponse

@property (readonly, nonatomic) BOOL shouldPunchOut;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShouldPunchOut:(BOOL)a0;

@end
