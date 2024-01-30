@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *securityScopedResources;
@property (readonly, nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSecurityScopedResources:(id)a0;
- (BOOL)isActive;
- (id)description;
- (void)activate;
- (void)deactivate;
- (id)accessibleURLs;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
