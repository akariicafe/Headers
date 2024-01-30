@interface WFPosterService : NSObject

- (void)fetchEligiblePostersWithCompletionHandler:(id /* block */)a0;
- (void)findPosterMatchingRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPostersWithCompletionHandler:(id /* block */)a0;

@end
