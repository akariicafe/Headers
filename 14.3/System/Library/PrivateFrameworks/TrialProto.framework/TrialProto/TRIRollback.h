@class NSString, TRIPBTimestamp;

@interface TRIRollback : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *rollbackTimestamp;
@property (nonatomic) BOOL hasRollbackTimestamp;
@property (copy, nonatomic) NSString *rolledBackBy;
@property (nonatomic) BOOL hasRolledBackBy;

+ (id)descriptor;

@end
