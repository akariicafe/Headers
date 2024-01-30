@interface TUMutableConversationParticipantCapabilities : TUConversationParticipantCapabilities

@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;


@end
