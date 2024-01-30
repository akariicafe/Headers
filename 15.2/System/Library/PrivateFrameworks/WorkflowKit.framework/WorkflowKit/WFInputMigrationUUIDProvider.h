@class NSString, WFAction;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider>

@property (readonly, nonatomic) WFAction *action;
@property (readonly, nonatomic) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)generateOutputUUIDForAction:(id)a0;
- (id)initWithAction:(id)a0 atPosition:(unsigned long long)a1;

@end
