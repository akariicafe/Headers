@class NSString, Logger;

@interface PSUICellularPlanListGroup : NSObject <PSSpecifierGroup> {
    Logger *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)getLogger;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)planSpecifierDetailText:(id)a0;
- (id)danglingPlanSpecifierDetailText:(id)a0;
- (void)danglingPlanPressed:(id)a0;

@end
