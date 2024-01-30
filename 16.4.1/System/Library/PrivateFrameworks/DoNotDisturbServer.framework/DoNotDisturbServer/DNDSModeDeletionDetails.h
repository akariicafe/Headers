@class NSSet;

@interface DNDSModeDeletionDetails : NSObject

@property (copy, nonatomic) NSSet *applicationIdentifiers;
@property (copy, nonatomic) NSSet *modeSpecificSettings;

- (void).cxx_destruct;

@end
