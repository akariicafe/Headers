@interface DRSPopulationPingMessage : DRSTaskingSystemMessage

+ (id)messageType;

- (id)init;
- (id)initWithJSONDict:(id)a0;
- (BOOL)_versionIsSupported:(id)a0;

@end
