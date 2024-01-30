@class NSArray, NSString;

@interface RMStatusPublisherDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *keyPaths;
@property (readonly, copy, nonatomic) NSString *principalClassName;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithKeyPaths:(id)a0 principalClassName:(id)a1;

@end
