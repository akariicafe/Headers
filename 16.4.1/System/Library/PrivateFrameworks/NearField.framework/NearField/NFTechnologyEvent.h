@interface NFTechnologyEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int technology;
@property (readonly, nonatomic) unsigned char valueAddedServiceMode;
@property (readonly, nonatomic) unsigned short systemCode;
@property (readonly, nonatomic) BOOL vasSupported;
@property (readonly, nonatomic) BOOL touchIDRequired;
@property (readonly, nonatomic) unsigned int terminalType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)initWithFieldNotification:(id)a0;
- (id)initWithTechnology:(unsigned int)a0 andValueAddedServiceMode:(unsigned int)a1;
- (id)initWithTechnology:(unsigned int)a0 andValueAddedServiceMode:(unsigned int)a1 andSystemCode:(unsigned short)a2;

@end
