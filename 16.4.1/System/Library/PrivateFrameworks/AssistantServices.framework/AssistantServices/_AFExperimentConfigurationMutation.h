@class NSString, NSArray, AFExperimentGroup, AFExperimentConfiguration;

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating> {
    AFExperimentConfiguration *_base;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasIdentifier : 1; unsigned char hasVersion : 1; unsigned char hasControlGroup : 1; unsigned char hasExperimentGroups : 1; unsigned char hasSalt : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setVersion:(id)a0;
- (id)getExperimentGroups;
- (id)initWithBase:(id)a0;
- (id)getIdentifier;
- (void)setControlGroup:(id)a0;
- (void)setSalt:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setExperimentGroups:(id)a0;
- (id)getVersion;
- (id)getControlGroup;
- (void)setType:(long long)a0;
- (long long)getType;
- (void).cxx_destruct;
- (id)getSalt;

@end
