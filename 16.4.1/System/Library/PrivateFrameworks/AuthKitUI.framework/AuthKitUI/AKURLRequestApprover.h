@class NSArray;

@interface AKURLRequestApprover : NSObject {
    NSArray *_whiteListedPaths;
}

- (void).cxx_destruct;
- (BOOL)_matchInputAgainstPaths:(id)a0;
- (id)initWithWhitelistedPaths:(id)a0;
- (BOOL)shouldAllowRequest:(id)a0;

@end
