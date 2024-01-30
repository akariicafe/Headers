@class NSString;

@interface GKBasePlayer : NSObject

@property (readonly, retain, nonatomic) NSString *playerID;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)playerID;
- (id)displayName;
- (id)initWithCoder:(id)a0;

@end
