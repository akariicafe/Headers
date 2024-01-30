@interface AMDPair : NSObject

@property (retain, nonatomic) id firstElement;
@property (retain, nonatomic) id secondElement;

- (id)first;
- (id)second;
- (void).cxx_destruct;
- (id)initWith:(id)a0 and:(id)a1;

@end
