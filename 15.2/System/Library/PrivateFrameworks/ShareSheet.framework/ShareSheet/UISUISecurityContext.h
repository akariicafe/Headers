@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *securityScopedResources;
@property (readonly, nonatomic) BOOL isActive;

- (id)initWithSecurityScopedResources:(id)a0;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActive;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (id)initWithCoder:(id)a0;
- (void)deactivate;
- (id)accessibleURLs;

@end
