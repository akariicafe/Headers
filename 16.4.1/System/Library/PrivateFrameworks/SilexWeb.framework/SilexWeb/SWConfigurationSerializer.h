@class NSString;

@interface SWConfigurationSerializer : NSObject <SWConfigurationSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializeWebContentConfiguration:(id)a0;

@end
