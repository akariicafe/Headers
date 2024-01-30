@class AFApplicationContext, NSString, AceObject, AFBulletin, NSDictionary;

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating> {
    AFApplicationContext *_baseModel;
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAssociatedBundleIdentifier : 1; unsigned char hasBulletin : 1; unsigned char hasAceContext : 1; unsigned char hasContextDictionary : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setAssociatedBundleIdentifier:(id)a0;
- (void)setAceContext:(id)a0;
- (void)setContextDictionary:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setBulletin:(id)a0;

@end
