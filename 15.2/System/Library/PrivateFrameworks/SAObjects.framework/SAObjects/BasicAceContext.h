@class NSString;

@interface BasicAceContext : NSObject <AceContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedBasicAceContext;

- (id)aceObjectWithDictionary:(id)a0;
- (Class)classWithClassName:(id)a0 group:(id)a1;
- (void)registerGroupAcronym:(id)a0 forGroupWithIdentifier:(id)a1;

@end
