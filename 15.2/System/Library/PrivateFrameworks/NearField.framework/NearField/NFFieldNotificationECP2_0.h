@class NSArray, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification

@property (readonly) BOOL odaRequired;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (readonly, retain) NSArray *tciArray;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly, nonatomic) NSData *readerIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
