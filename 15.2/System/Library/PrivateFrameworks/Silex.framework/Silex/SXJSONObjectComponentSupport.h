@class NSString;

@interface SXJSONObjectComponentSupport : NSObject

@property (readonly, nonatomic) NSString *specVersion;

+ (id)shared;

- (void).cxx_destruct;
- (id)initWithSpecVersion:(id)a0;
- (id /* block */)objectValueClassBlock;
- (id /* block */)purgeClassBlock;

@end
