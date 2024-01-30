@class SIComponentIdentifier, NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (class, readonly, nonatomic) int joinability;

@property (readonly, nonatomic) SIComponentIdentifier *componentIdentifier;
@property (readonly, nonatomic) int componentName;
@property (readonly, nonatomic) int clockIsolationLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTypeId;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getVersion;
- (BOOL)isProvisional;
- (id)wrapAsAnyEvent;
- (id)getComponentId;
- (int)getComponentName;
- (id)getRequestLinkInfo;

@end
