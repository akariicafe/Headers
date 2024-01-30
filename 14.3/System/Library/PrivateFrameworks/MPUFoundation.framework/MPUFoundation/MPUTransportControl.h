@interface MPUTransportControl : NSObject <NSCopying> {
    unsigned long long _numberOfAvailableSlotsInContainer;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) int group;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL supportsLongPress;
@property (nonatomic) BOOL acceptsTapsWhenDisabled;

+ (id)_transportControlsForMediaRemoteCommands:(struct __CFArray { } *)a0 withAllowedTransportControlTypes:(id)a1 allowsDisabledControls:(BOOL)a2;
+ (void)_addTransportControl:(id)a0 toTransportControlsArray:(id)a1;
+ (id)_descriptionForTransportControlType:(long long)a0;
+ (id)_descriptionForTransportControlGroup:(int)a0;
+ (int)_groupForTransportControlType:(long long)a0;
+ (BOOL)_transportControlAcceptsTapsWhenDisabledForType:(long long)a0;
+ (BOOL)_transportControlSupportsHighlightingForCommand:(unsigned int)a0;
+ (long long)_transportControlTypeForCommand:(unsigned int)a0;
+ (id)_createTransportControlForType:(long long)a0 withMediaRemoteCommand:(void *)a1;
+ (BOOL)_hasUnderlyingCommandForTransportControlType:(long long)a0;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray { } *)a0 controlsCount:(unsigned long long)a1;
+ (id)transportControlsForControlTypes:(id)a0 withMediaRemoteCommands:(struct __CFArray { } *)a1;
+ (id)transportControlWithType:(long long)a0 group:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)_priority;
- (long long)_compare:(id)a0 ordering:(long long)a1;
- (id)initWithType:(long long)a0 group:(int)a1;

@end
