@class NSString;

@interface SXJSONObjectComponentSupport : NSObject

@property (readonly, nonatomic) NSString *specVersion;

+ (id)shared;

- (id /* block */)objectValueClassBlock;
- (id)initWithSpecVersion:(id)a0;
- (id /* block */)purgeClassBlock;
- (void).cxx_destruct;

@end
