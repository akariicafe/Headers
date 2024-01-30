@class NSString, NSDictionary;

@interface IEIntent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *slots;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
