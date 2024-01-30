@class ATXExecutableReference, ATXExecutableIdentifier;

@interface ATXExecutableReferencePair : NSObject

@property (readonly, nonatomic) ATXExecutableReference *reference;
@property (readonly, nonatomic) ATXExecutableIdentifier *executable;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithReference:(id)a0 executable:(id)a1;

@end
