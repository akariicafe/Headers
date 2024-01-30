@class SBSystemNotesPositionConfiguration, SBSSystemNotesPresentationConfiguration;

@interface SBSystemNotesContentPresentationContext : NSObject

@property (retain, nonatomic) SBSSystemNotesPresentationConfiguration *requestedConfiguration;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) SBSystemNotesPositionConfiguration *positionConfiguration;

- (void).cxx_destruct;
- (id)initWithLaunchBundleID:(id)a0 presentationMode:(long long)a1 source:(unsigned long long)a2 positionConfiguration:(id)a3;
- (id)initWithRequestedConfiguration:(id)a0 source:(unsigned long long)a1 positionConfiguration:(id)a2;

@end
