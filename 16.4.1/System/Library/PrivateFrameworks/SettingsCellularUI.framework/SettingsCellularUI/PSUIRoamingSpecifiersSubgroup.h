@class PSUICoreTelephonyDataCache, NSString, PSListController, CTServiceDescriptor;

@interface PSUIRoamingSpecifiersSubgroup : NSObject <PSSpecifierGroup> {
    CTServiceDescriptor *_serviceDescriptor;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)getDataRoamingStatus:(id)a0;
- (id)initWithListController:(id)a0 dataCache:(id)a1 serviceDescriptor:(id)a2;
- (void)roamingOptionsDidChange;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;

@end
