@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication

@property (retain, nonatomic) NTKCompanion3rdPartyApp *app;

+ (id)complicationWithApp:(id)a0;

- (void).cxx_destruct;
- (id)ntk_sectionIdentifier;
- (id)localizedDetailText;

@end
