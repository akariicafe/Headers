@class NSSet;

@interface ASRelationshipBeganPlaceholder : NSObject

@property (readonly, nonatomic) id token;
@property (readonly, nonatomic) NSSet *blocksWaitingOnSuccess;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (void)registerBlockWaitingOnSuccess:(id /* block */)a0;

@end
