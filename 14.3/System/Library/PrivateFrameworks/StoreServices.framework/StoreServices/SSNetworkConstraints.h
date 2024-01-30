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

+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)a0;
+ (void)_addNetworkConstraintsToDictionary:(id)a0 forNetworkType:(long long)a1 legacyDictionary:(id)a2;
+ (id)_newModernNetworkConstraintsWithArray:(id)a0;
+ (id)networkConstraintsForDownloadKind:(id)a0 fromBag:(id)a1;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)a0;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (long long)sizeLimitForNetworkType:(long long)a0;
- (id)init;
- (id)_copySizeLimits;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)disableCellularNetworkTypes;
- (void)_disableAllNetworkTypes;
- (id)initWithCoder:(id)a0;
- (long long)_sizeLimitForNetworkType:(long long)a0;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setSizeLimit:(long long)a0 forNetworkType:(long long)a1;
- (BOOL)hasSizeLimitForNetworkType:(long long)a0;
- (void)setSizeLimit:(long long)a0 forNetworkType:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
