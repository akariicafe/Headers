@class NSArray;

@interface _PASStringPairs : NSObject

@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long count;

- (id)keyAtIndex:(unsigned long long)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0 values:(id)a1;
- (id)init;

@end
