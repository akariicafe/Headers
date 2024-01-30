@class RBProcess, NSArray;

@interface RBAssertionBatchContext : NSObject

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, copy, nonatomic) NSArray *descriptorsToAcquire;
@property (readonly, copy, nonatomic) NSArray *identifiersToInvalidate;
@property (retain, nonatomic) id holdToken;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowAbstractTarget;
@property (nonatomic) unsigned long long acquisitionPolicy;

+ (id)contextForProcess:(id)a0 acquisitionCompletionPolicy:(unsigned long long)a1 withDescriptorsToAcquire:(id)a2 identifiersToInvalidate:(id)a3;
+ (id)contextForProcess:(id)a0 withDescriptorsToAcquire:(id)a1 identifiersToInvalidate:(id)a2;

- (void).cxx_destruct;
- (id)_init;
- (id)acquisitionContextForDescriptor:(id)a0;

@end
