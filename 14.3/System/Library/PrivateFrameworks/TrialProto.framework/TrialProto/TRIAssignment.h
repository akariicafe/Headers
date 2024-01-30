@class TRICoreMLAssignmentLanguage, TRIUIAssignmentLanguage, TRIPlanOutAssignmentLanguage, TRINSExpressionAssignmentLanguage, TRIRolloutAssignmentLanguage;

@interface TRIAssignment : TRIPBMessage

@property (readonly, nonatomic) int languageOneOfCase;
@property (retain, nonatomic) TRINSExpressionAssignmentLanguage *nsexpressionLanguage;
@property (retain, nonatomic) TRIUIAssignmentLanguage *uiLanguage;
@property (retain, nonatomic) TRICoreMLAssignmentLanguage *coremlLanguage;
@property (retain, nonatomic) TRIPlanOutAssignmentLanguage *planoutLanguage;
@property (retain, nonatomic) TRIRolloutAssignmentLanguage *rolloutLanguage;

+ (id)descriptor;

@end
