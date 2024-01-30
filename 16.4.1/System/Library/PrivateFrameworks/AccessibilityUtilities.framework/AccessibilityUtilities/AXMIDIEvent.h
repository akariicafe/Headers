@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short channel;
@property (readonly, nonatomic) long long ordinalChannel;
@property (readonly, nonatomic, getter=isOmniChannel) BOOL omniChannel;
@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isDownEvent) BOOL downEvent;
@property (nonatomic) unsigned char note;
@property (readonly, nonatomic) long long noteValue;
@property (readonly, nonatomic) unsigned char noteOctave;
@property (nonatomic) unsigned char pressure;
@property (nonatomic) unsigned char control;
@property (nonatomic) unsigned char controlValue;
@property (nonatomic) unsigned char program;
@property (nonatomic) unsigned short pitchBend;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)noteDescription;

@end
