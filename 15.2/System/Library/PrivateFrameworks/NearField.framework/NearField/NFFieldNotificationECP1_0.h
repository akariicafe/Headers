@interface NFFieldNotificationECP1_0 : NFFieldNotification

@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionaryForDavenport:(id)a0;

@end
