@class NSDictionary;

@interface COStateReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSDictionary *state;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0;
- (void).cxx_destruct;

@end
