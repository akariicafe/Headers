@class NSString, PKPassTileState;

@interface PKMutablePassTileDescriptorState : PKPassTileDescriptorState

@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic, getter=isEnabled) unsigned long long enabled;
@property (copy, nonatomic) NSString *stateIdentifier;
@property (retain, nonatomic) PKPassTileState *stateOverride;
@property (nonatomic, getter=isInProgress) BOOL inProgress;

- (void)setSupported:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(unsigned long long)a0;
- (void)setInProgress:(BOOL)a0;
- (void)setStateIdentifier:(id)a0;
- (void)setStateOverride:(id)a0;

@end
