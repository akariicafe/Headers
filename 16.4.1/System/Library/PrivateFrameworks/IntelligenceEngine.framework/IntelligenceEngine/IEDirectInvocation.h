@class NSString, NSDictionary;

@interface IEDirectInvocation : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *userData;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 withUserData:(id)a1;

@end
