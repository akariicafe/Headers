@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface SoftISPGraph : NSObject {
    NSMutableDictionary *_stagesByName;
    NSMutableDictionary *_connectionsBySourceStage;
    NSMutableDictionary *_connectionsByDestinationStage;
    NSMutableArray *_inputConnections;
    NSMutableArray *_outputConnections;
    NSMutableSet *_assignedDestinationNames;
    NSString *_inputStageName;
    NSString *_outputStageName;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
