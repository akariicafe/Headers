@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication

@property (retain, nonatomic) NTKCompanion3rdPartyApp *app;

+ (id)complicationWithApp:(id)a0;

- (void).cxx_destruct;
- (id)localizedDetailText;
- (id)ntk_sectionIdentifier;

@end
