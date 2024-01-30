@class ATXExecutableReference, ATXExecutableIdentifier;

@interface ATXExecutableReferencePair : NSObject

@property (readonly, nonatomic) ATXExecutableReference *reference;
@property (readonly, nonatomic) ATXExecutableIdentifier *executable;

- (id)initWithReference:(id)a0 executable:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
