@class NSString, NSDictionary;

@interface SKIDirectInvocationPayload : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *userData;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
