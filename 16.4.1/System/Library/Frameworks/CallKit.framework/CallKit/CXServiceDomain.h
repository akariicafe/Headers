@class NSString;

@interface CXServiceDomain : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *machName;

+ (id)callKitServiceDomain;

- (id)initWithName:(id)a0 machName:(id)a1;
- (void).cxx_destruct;

@end
