@class NSString, NSArray;

@interface PhotosGraph.PGUpNextDebugInfoBuilder : NSObject {
    void /* unknown type, empty encoding */ inputDebugInfo;
    void /* unknown type, empty encoding */ rootMemoryNodeUniqueIdentifier;
    void /* unknown type, empty encoding */ momentUUIDs;
    void /* unknown type, empty encoding */ featureWeightVectors;
    void /* unknown type, empty encoding */ suggestionFilteringLogs;
}

@property (nonatomic) void /* unknown type, empty encoding */ wantsVerboseDebugInfo;
@property (nonatomic, copy) NSString *inputDebugInfo;
@property (nonatomic) void /* unknown type, empty encoding */ rootMemoryIsAggregation;
@property (nonatomic, copy) NSString *rootMemoryNodeUniqueIdentifier;
@property (nonatomic, copy) NSArray *momentUUIDs;
@property (nonatomic, copy) NSArray *featureWeightVectors;
@property (nonatomic, readonly) NSString *debugInfo;

- (id)init;
- (void).cxx_destruct;
- (void)addSuggestionFilteringLog:(id)a0;

@end
