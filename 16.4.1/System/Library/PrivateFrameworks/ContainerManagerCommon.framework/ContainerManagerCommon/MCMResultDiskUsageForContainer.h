@interface MCMResultDiskUsageForContainer : MCMResultBase

@property (nonatomic) unsigned long long diskUsageBytes;
@property (nonatomic) unsigned long long descendants;
@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) int personaType;

+ (id)_reportingWorkloop;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void)_report;
- (unsigned long long)_roundToTwoSignificantDigitsWithNumber:(unsigned long long)a0;
- (id)initWithDiskUsageBytes:(unsigned long long)a0 descendants:(unsigned long long)a1 containerClass:(unsigned long long)a2 personaType:(int)a3;

@end
