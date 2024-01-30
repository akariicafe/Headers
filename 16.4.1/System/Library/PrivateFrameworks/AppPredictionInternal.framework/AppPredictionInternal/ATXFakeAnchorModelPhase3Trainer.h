@class NSString, NSMutableArray;

@interface ATXFakeAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {
    NSMutableArray *_candidateIdsForPhase3Training;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
