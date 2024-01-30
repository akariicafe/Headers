@class PSUICoreTelephonyDataCache, NSString, PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, PSUIDataModeSpecifier;

@interface PSUIDataModeSubgroup : NSObject <PSSpecifierGroup> {
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
    PSUICoreTelephonyDataCache *_dataCache;
    CTXPCServiceSubscriptionContext *_context;
    PSUIDataModeSpecifier *_dataModeSpecifier;
}

@property (readonly, nonatomic) BOOL shouldShowLinkCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
