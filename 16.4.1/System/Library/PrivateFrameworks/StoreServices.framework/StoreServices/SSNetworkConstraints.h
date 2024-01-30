@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_addNetworkConstraintsToDictionary:(id)a0 forNetworkType:(long long)a1 legacyDictionary:(id)a2;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)a0;
+ (id)_newModernNetworkConstraintsWithArray:(id)a0;
+ (id)networkConstraintsForDownloadKind:(id)a0 fromBag:(id)a1;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setSizeLimit:(long long)a0 forNetworkType:(long long)a1;
- (long long)sizeLimitForNetworkType:(long long)a0;
- (id)init;
- (void)_disableAllNetworkTypes;
- (void)_setSizeLimit:(long long)a0 forNetworkType:(long long)a1;
- (long long)_sizeLimitForNetworkType:(long long)a0;
- (BOOL)hasSizeLimitForNetworkType:(long long)a0;
- (id)_copySizeLimits;
- (void)disableCellularNetworkTypes;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)a0;

@end
