@class PKPassShareTimeConfiguration, NSString, PKDisplayablePassEntitlement, PKPassEntitlementsComposer, PKPassSharedEntitlement;
@protocol NSCopying;

@interface PKPassEntitlementsComposerEntry : NSObject <PKPassEntitlementsComposerView, PKIdentifiable> {
    BOOL _enabled;
    BOOL _isUsingAdvancedScheduling;
    PKPassEntitlementsComposer *_parentEntitlementComposer;
}

@property (retain, nonatomic) PKDisplayablePassEntitlement *displayableEntitlement;
@property (retain, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly, nonatomic) unsigned long long possibleShareability;
@property (readonly, nonatomic) unsigned long long possibleVisibility;
@property (readonly, nonatomic) unsigned long long possibleManageability;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long manageability;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) BOOL isUsingAdvancedScheduling;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
