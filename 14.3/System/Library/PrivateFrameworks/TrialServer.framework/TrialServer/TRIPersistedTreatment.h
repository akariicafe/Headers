@class TRIClientTreatment;

@interface TRIPersistedTreatment : TRIPBMessage

@property (retain, nonatomic) TRIClientTreatment *treatment;
@property (nonatomic) BOOL hasTreatment;

+ (id)descriptor;

@end
