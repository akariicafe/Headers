@class NSString, NSSet;

@interface IAMChangedContextPropertiesTriggerContext : NSObject <IAMTriggerContext>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSSet *contextPropertyNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)satisfiesPresentationTrigger:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextPropertyNames:(id)a0 bundleIdentifier:(id)a1;

@end
