@class NSString, NSSet;

@interface HDOAuthScopeSet : NSObject

@property (readonly, copy, nonatomic) NSString *originalScopeString;
@property (readonly, copy, nonatomic) NSSet *readableResources;
@property (readonly, nonatomic) BOOL canReadAllResources;
@property (readonly, nonatomic) BOOL shouldSelectivelyIngest;

- (void).cxx_destruct;
- (BOOL)parseWithError:(id *)a0;
- (id)description;
- (id)initWithScopeString:(id)a0;
- (BOOL)canReadResourceType:(id)a0;

@end
