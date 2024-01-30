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

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roundRectToScreenScaleForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenUtilsDelegate:(id)a1;

- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2;
- (void)addOccurrenceTemporarilyToBeginning:(id)a0;
- (void)revertTemporaryChanges;
- (void)removeOccurrenceAtEndTemporarily;
- (void)stampFramesOntoOccurrences;
- (void).cxx_destruct;
- (void)makeTemporaryChangesPermanent;
- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2 geometryDelegate:(id)a3;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToEnd:(id)a0;
- (void)removeOccurrenceAtBeginningTemporarily;
- (id)earliestOccurrence;

@end
