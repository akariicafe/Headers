@interface CADPredicate : NSPredicate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)evaluateWithObject:(id)a0;

@end
