@class NSArray, NWNetworkAdviceUpdate, NSDate, NSPredicate;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long version;
@property (readonly) long long scopedToLOI;
@property (readonly) long long flags;
@property BOOL isTrafficEligible;
@property BOOL willGetDiscretionaryTrafficInvites;
@property BOOL discretionaryTrafficInvited;
@property long long interfaceClass;
@property long long considerAlternate;
@property (retain) NWNetworkAdviceUpdate *considerAlternateUpdate;
@property long long linkQuality;
@property long long powerCostDL;
@property long long powerCostUL;
@property (retain) NSDate *predictionsGeneratedAt;
@property (retain) NSArray *predictions;
@property (readonly) long long interface;
@property (readonly) BOOL isAny;
@property (readonly) BOOL isBuiltin;
@property (readonly) NSPredicate *customSignature;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identityAttrsOnly;
- (void)removeObserverForAllKeyPaths:(id)a0;
- (void)addObserverForAllKeyPaths:(id)a0;
- (id)initWithSpec:(long long)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (id)_descriptionFull:(BOOL)a0;
- (BOOL)_isEqualToNOI:(id)a0;
- (id)typePrettyPrint;
- (BOOL)atHomeScopedNOI;
- (BOOL)atWorkScopedNOI;

@end
