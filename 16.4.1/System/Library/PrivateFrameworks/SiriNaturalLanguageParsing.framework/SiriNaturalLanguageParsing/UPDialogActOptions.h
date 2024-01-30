@class NSString, NSArray;

@interface UPDialogActOptions : NSObject <UPDialogAct>

@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSArray *entityValues;
@property (readonly, copy) NSString *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 entityType:(id)a1 entityName:(id)a2 entityValues:(id)a3;

@end
