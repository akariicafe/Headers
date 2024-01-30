@class NSString;

@interface MDPerson : CSPerson

@property (readonly) NSString *handle;

+ (BOOL)supportsSecureCoding;

- (id)initWithDisplayName:(id)a0 handle:(id)a1 handleIdentifier:(id)a2;

@end
