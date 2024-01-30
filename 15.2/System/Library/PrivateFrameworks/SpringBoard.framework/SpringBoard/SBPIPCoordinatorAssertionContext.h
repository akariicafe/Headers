@class NSString;

@interface SBPIPCoordinatorAssertionContext : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long reason;

- (id)initWithIdentifier:(id)a0 reason:(long long)a1;
- (void).cxx_destruct;

@end
