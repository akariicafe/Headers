@class NSString, NSDictionary, NSMutableArray, PDIterate;

@interface PDTimeNode : NSObject {
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    BOOL mHasPresetId;
    int mPresetId;
    BOOL mHasPresetSubType;
    int mPresetSubType;
    BOOL mHasRepeatCount;
    int mRepeatCount;
    BOOL mHasRepeatDuration;
    int mRepeatDuration;
    int mRestartType;
    BOOL mHasDuration;
    double mDuration;
    BOOL mHasSpeed;
    double mSpeed;
    BOOL mHasAcceleration;
    double mAcceleration;
    BOOL mHasDeceleration;
    double mDeceleration;
    BOOL mHasDisplay;
    BOOL mDisplay;
    BOOL mHasFillType;
    int mFillType;
    NSString *mGroupId;
}

@property (retain, nonatomic) NSDictionary *attributeMap;

- (void)setRepeatCount:(int)a0;
- (int)repeatDuration;
- (BOOL)hasType;
- (int)type;
- (double)duration;
- (void)setDisplay:(BOOL)a0;
- (void)setRepeatDuration:(int)a0;
- (double)acceleration;
- (BOOL)hasDuration;
- (double)speed;
- (BOOL)display;
- (long long)writeDuration;
- (BOOL)isEqual:(id)a0;
- (void)setSpeed:(double)a0;
- (void)setType:(int)a0;
- (int)repeatCount;
- (unsigned long long)hash;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (int)fillType;
- (BOOL)hasFillType;
- (BOOL)hasSpeed;
- (void)setFillType:(int)a0;
- (double)deceleration;
- (void)setDeceleration:(double)a0;
- (void)setAcceleration:(double)a0;
- (void)setRestartType:(int)a0;
- (int)restartType;
- (BOOL)hasRepeatCount;
- (BOOL)hasAcceleration;
- (BOOL)hasDeceleration;
- (id)iterate;
- (id)subTimeNodeList;
- (int)animationPresetClass;
- (id)childTimeNodeList;
- (id)endTimeConditions;
- (BOOL)hasDisplay;
- (BOOL)hasPresetClass;
- (BOOL)hasPresetId;
- (BOOL)hasPresetSubType;
- (BOOL)hasRepeatDuration;
- (BOOL)hasRestartType;
- (int)presetId;
- (int)presetSubType;
- (void)setAnimationPresetClass:(int)a0;
- (void)setChildTimeNodeList:(id)a0;
- (void)setEndTimeConditions:(id)a0;
- (void)setGroupIdValue:(int)a0;
- (void)setIterate:(id)a0;
- (void)setPresetId:(int)a0;
- (void)setPresetSubType:(int)a0;
- (void)setStartTimeConditions:(id)a0;
- (void)setSubTimeNodeList:(id)a0;
- (id)startTimeConditions;
- (long long)writeRepeatCount;

@end
