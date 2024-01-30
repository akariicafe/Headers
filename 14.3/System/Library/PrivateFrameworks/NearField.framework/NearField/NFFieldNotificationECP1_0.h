@interface NFFieldNotificationECP1_0 : NFFieldNotification

@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
