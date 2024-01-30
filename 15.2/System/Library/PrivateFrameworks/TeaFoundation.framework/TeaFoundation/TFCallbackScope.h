@class NSArray;

@interface TFCallbackScope : NSObject

@property (readonly, nonatomic) unsigned long long scope;
@property (readonly, nonatomic) NSArray *names;

- (id)initWithScope:(unsigned long long)a0 names:(id)a1;
- (void).cxx_destruct;

@end
