@class TRIRolloutIdentifiers, TRIExperimentIdentifiers;

@interface _PSFTZKWTrialData : NSObject <NSCopying>

@property (copy, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property (copy, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (nonatomic) BOOL structuredCalendarIsEnabled;
@property (nonatomic) long long structuredCalendarDefaultConfidenceCategory;
@property (nonatomic) BOOL unstructuredCalendarIsEnabled;
@property (nonatomic) long long unstructuredCalendarDefaultConfidenceCategory;
@property (nonatomic) BOOL unstructuredRemindersIsEnabled;
@property (nonatomic) long long unstructuredRemindersDefaultConfidenceCategory;
@property (nonatomic) BOOL primaryInteractionsIsEnabled;
@property (nonatomic) long long primaryInteractionsDefaultConfidenceCategory;
@property (nonatomic) long long primaryInteractionsModelType;
@property (nonatomic) BOOL fallbackInteractionsIsEnabled;
@property (nonatomic) long long fallbackInteractionsDefaultConfidenceCategory;
@property (nonatomic) long long fallbackInteractionsModelType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
