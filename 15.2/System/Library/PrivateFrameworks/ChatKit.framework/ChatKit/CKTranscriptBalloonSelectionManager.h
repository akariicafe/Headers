@class NSString, NSMutableDictionary, NSMutableOrderedSet, NSArray;
@protocol CKTranscriptBalloonSelectionManagerDelegate, CKTranscriptBalloonSelectionManagerDataSource;

@interface CKTranscriptBalloonSelectionManager : NSObject <NSFastEnumeration>

@property (retain, nonatomic) NSMutableOrderedSet *selectedMessageGuids;
@property (retain, nonatomic) NSMutableDictionary *selectedStates;
@property (retain, nonatomic) NSString *trackedGuid;
@property (readonly, nonatomic) NSArray *chatItems;
@property (weak, nonatomic) id<CKTranscriptBalloonSelectionManagerDelegate> delegate;
@property (weak, nonatomic) id<CKTranscriptBalloonSelectionManagerDataSource> dataSource;
@property (readonly, nonatomic) unsigned long long selectedGuidCount;

- (void)removeAllSelectedMessageGuids;
- (BOOL)isMessageGuidSelected:(id)a0;
- (void)addSelectedMessageGuid:(id)a0 selectionState:(id)a1;
- (void)removeSelectedMessageGuid:(id)a0;
- (id)selectedStateForGuid:(id)a0;
- (BOOL)__im_ff_commSafetyUIEnabled;
- (void)trackSelectedGuid:(id)a0 selectionState:(id)a1;
- (void)removeAllSelectedMessageGuidsExceptTrackedGuid;
- (void)setSelectedGuids:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)indexOfGuid:(id)a0 inChatItems:(id)a1;
- (id)selectedGuidAtIndex:(unsigned long long)a0;
- (void)removeTrackedGuid;
- (id)init;
- (id)_chatItemForGUID:(id)a0;

@end
