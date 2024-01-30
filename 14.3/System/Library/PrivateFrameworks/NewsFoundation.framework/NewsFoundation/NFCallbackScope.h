@class NSArray;

@interface NFCallbackScope : NSObject

@property (readonly, nonatomic) unsigned long long scope;
@property (readonly, nonatomic) NSArray *names;

- (void).cxx_destruct;
- (id)initWithScope:(unsigned long long)a0 names:(id)a1;

@end
