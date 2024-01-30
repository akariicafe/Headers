@class NSSet;

@interface ASRelationshipBeganPlaceholder : NSObject

@property (readonly, nonatomic) id token;
@property (readonly, nonatomic) NSSet *blocksWaitingOnSuccess;

- (id)initWithToken:(id)a0;
- (void).cxx_destruct;
- (void)registerBlockWaitingOnSuccess:(id /* block */)a0;

@end
