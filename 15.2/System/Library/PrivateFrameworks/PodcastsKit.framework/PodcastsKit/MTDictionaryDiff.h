@class NSDictionary, NSMutableArray, NSSet;

@interface MTDictionaryDiff : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSSet *properties;

- (id)initWithProperties:(id)a0;
- (void)addCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
