@interface NMSPBMapping : NSObject

@property (retain, nonatomic) Class requestClass;
@property (retain, nonatomic) Class responseClass;

- (id)description;
- (void).cxx_destruct;

@end
