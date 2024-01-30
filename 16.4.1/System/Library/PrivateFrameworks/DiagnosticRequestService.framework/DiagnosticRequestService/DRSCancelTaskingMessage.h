@class NSDictionary;

@interface DRSCancelTaskingMessage : DRSTaskingSystemMessage

@property (readonly, nonatomic) NSDictionary *perTeamCancelledConfigUUIDs;

+ (id)messageType;

- (void).cxx_destruct;
- (BOOL)_versionIsSupported:(id)a0;
- (id)jsonDictRepresentation;
- (BOOL)_isEqualToMessage:(id)a0;
- (id)initWithJSONDict:(id)a0;
- (id)initWithVersion:(id)a0 messageUUID:(id)a1 dateBroadcast:(id)a2 dateReceived:(id)a3 perTeamCancelledConfigUUIDs:(id)a4;

@end
