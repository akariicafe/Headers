@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char midiChannel;
@property (readonly, nonatomic) NSArray *enabledProfiles;
@property (readonly, nonatomic) NSArray *disabledProfiles;

+ (id)description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithChannel:(unsigned char)a0 enabledProfiles:(id)a1 disabledProfiles:(id)a2;
- (id)bytesWithChannel:(unsigned char)a0;
- (id)initWithEnabledProfiles:(id)a0 disabledProfiles:(id)a1;
- (void)updateWithEnabledProfiles:(id)a0 disabledProfiles:(id)a1;

@end
