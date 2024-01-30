@interface BioStreamsEventHelper : NSObject

@property (nonatomic) long long deviceType;
@property (nonatomic) BOOL inBuddy;

- (id)containerIdentifier;
- (id)subtype;
- (id)initWithBKDeviceType:(long long)a0 inBuddy:(BOOL)a1;
- (void)sendSuccessfulEnrollEvent;

@end
