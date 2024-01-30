@class NSError, MAAsset;

@interface SUCoreConfigParam : NSObject

@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) MAAsset *locatedAsset;
@property (readonly, nonatomic) unsigned long long operation;

- (id)initWithLocatedAsset:(id)a0;
- (id)initWithError:(id)a0 operation:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
