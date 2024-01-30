@class NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (BOOL)isProvisional;
- (id)getTypeId;
- (id)getVersion;
- (id)wrapAsAnyEvent;

@end
