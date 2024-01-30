@class NSString, DNDContactHandle;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic) BOOL notifyAnyway;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long urgency;
@property (copy, nonatomic) DNDContactHandle *sender;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *filterCriteria;
@property (nonatomic) BOOL shouldAlwaysInterrupt;

- (void)setSender:(id)a0;
- (void)setShouldAlwaysInterrupt:(BOOL)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setUrgency:(unsigned long long)a0;
- (void)setBehavior:(unsigned long long)a0;
- (void)setFilterCriteria:(id)a0;
- (void)setNotifyAnyway:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setBundleIdentifier:(id)a0;

@end
