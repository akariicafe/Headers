@class NSString, NSDictionary, NSDate, NSMutableArray;

@interface PKSelectionStatisticsSession : NSObject {
    NSMutableArray *_selectionGestures;
    NSMutableArray *_selectionActions;
    NSDate *_startTime;
}

@property (readonly, nonatomic) NSDictionary *selectionGestureDictionary;
@property (readonly, nonatomic) NSDictionary *selectionActionDictionary;
@property (nonatomic) double timeSpentSelecting;
@property (nonatomic) long long numberOfTimesSelectionWasClearedInASession;
@property (nonatomic) long long selectionGestureCount;
@property (retain, nonatomic) NSString *lastActionTaken;
@property (retain, nonatomic) NSString *lastSignificantActionTaken;
@property (nonatomic) long long lastSelectionType;
@property (nonatomic) long long lastContentType;

- (void).cxx_destruct;
- (id)init;
- (void)logSelectionAction:(long long)a0;
- (void)logGesture:(long long)a0 selectionType:(long long)a1 contentType:(long long)a2;

@end
