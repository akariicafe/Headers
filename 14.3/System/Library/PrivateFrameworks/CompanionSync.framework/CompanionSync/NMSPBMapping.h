@interface NMSPBMapping : NSObject

@property (retain, nonatomic) Class requestClass;
@property (retain, nonatomic) Class responseClass;

- (void).cxx_destruct;
- (id)description;

@end
