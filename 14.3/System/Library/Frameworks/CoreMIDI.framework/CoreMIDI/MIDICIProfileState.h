@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char midiChannel;
@property (readonly, nonatomic) NSArray *enabledProfiles;
@property (readonly, nonatomic) NSArray *disabledProfiles;

+ (id)description;

- (id)initWithChannel:(unsigned char)a0 enabledProfiles:(id)a1 disabledProfiles:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnabledProfiles:(id)a0 disabledProfiles:(id)a1;
- (void)updateWithEnabledProfiles:(id)a0 disabledProfiles:(id)a1;
- (id)bytesWithChannel:(unsigned char)a0;

@end
