@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *securityScopedResources;
@property (readonly, nonatomic) BOOL isActive;

- (void)deactivate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isActive;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (id)accessibleURLs;
- (id)initWithSecurityScopedResources:(id)a0;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)a0;

@end
