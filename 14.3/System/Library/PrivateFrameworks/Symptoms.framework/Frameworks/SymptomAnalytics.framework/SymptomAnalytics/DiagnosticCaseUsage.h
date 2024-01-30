@class NSString, NSDate;

@interface DiagnosticCaseUsage : NSManagedObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *process;
@property (retain, nonatomic) NSDate *lastSeen;
@property (retain, nonatomic) NSDate *lastAccepted;
@property (nonatomic) int casesSeen;
@property (nonatomic) int casesAccepted;
@property (nonatomic) double interarrival_mean;
@property (nonatomic) double interarrival_var;

@end
