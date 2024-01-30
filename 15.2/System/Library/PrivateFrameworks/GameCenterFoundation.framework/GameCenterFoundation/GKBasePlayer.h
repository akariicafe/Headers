@class NSString;

@interface GKBasePlayer : NSObject

@property (readonly, retain, nonatomic) NSString *playerID;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)displayName;
- (id)playerID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
