@interface ATXActionPredictionTypes : NSObject

+ (id)actionFeedbackTypeToString:(unsigned long long)a0;
+ (id)actionTypeToPETString:(unsigned long long)a0;
+ (id)inverseActionFeedbackTypeMapping;
+ (id)engagementTypeToString:(unsigned long long)a0;
+ (id)actionFeedbackStageToString:(unsigned long long)a0;
+ (unsigned long long)stringToActionFeedbackStage:(id)a0 found:(BOOL *)a1;
+ (id)actionTypeToString:(unsigned long long)a0;
+ (unsigned long long)stringToActionExperience:(id)a0 found:(BOOL *)a1;
+ (id)actionExperienceToString:(unsigned long long)a0;

@end
