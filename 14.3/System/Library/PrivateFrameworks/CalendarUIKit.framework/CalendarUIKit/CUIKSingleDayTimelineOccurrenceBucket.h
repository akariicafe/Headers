@class NSArray, CUIKSingleDayTimelineLayoutPartition, NSMutableArray;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
    id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
    id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
    BOOL _useTemporaryFitnessLevel;
    BOOL _temporaryFitnessLevelRequiresCalculation;
    double _temporaryFitnessLevel;
    BOOL _originalFitnessLevelRequiresCalculation;
    double _originalFitnessLevel;
    BOOL _ignoreFirstOccurrenceInFitnessCalculations;
    BOOL _ignoreLastOccurrenceInFitnessCalculations;
}

@property (retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition;
@property (retain, nonatomic) NSMutableArray *currentOccurrences;
@property (readonly, nonatomic) NSArray *occurrences;
@property (nonatomic) BOOL isOnlyBucket;
@property (weak) id<CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;

- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2;
- (void).cxx_destruct;
- (id)_occurrencesForFitnessLevel;
- (void)makeTemporaryChangesPermanent;
- (void)removeOccurrenceAtEndTemporarily;
- (void)addOccurrenceTemporarilyToBeginning:(id)a0;
- (void)addOccurrenceTemporarilyToEnd:(id)a0;
- (id)earliestOccurrence;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)revertTemporaryChanges;
- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2 geometryDelegate:(id)a3;
- (void)stampFramesOntoOccurrences;

@end
