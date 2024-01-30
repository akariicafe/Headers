@class PSSpecifier, NSArray, NSString, PSListController;

@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup> {
    BOOL _supportsWiFiCalling;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) NSArray *wifiCallingSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 parentSpecifier:(id)a2;

@end
