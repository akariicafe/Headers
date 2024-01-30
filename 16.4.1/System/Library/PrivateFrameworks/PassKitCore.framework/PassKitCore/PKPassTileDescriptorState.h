@class NSString, PKPassTileState;

@interface PKPassTileDescriptorState : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isEnabled) unsigned long long enabled;
@property (readonly, copy, nonatomic) NSString *stateIdentifier;
@property (readonly, nonatomic) PKPassTileState *stateOverride;
@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initForType:(long long)a0;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
