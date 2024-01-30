@class NSArray;

@interface AKURLRequestApprover : NSObject {
    NSArray *_whiteListedPaths;
}

- (void).cxx_destruct;
- (id)initWithWhitelistedPaths:(id)a0;
- (BOOL)shouldAllowRequest:(id)a0;
- (BOOL)_matchInputAgainstPaths:(id)a0;

@end
