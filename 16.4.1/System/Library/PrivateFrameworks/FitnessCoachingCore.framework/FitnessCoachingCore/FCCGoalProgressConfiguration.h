@class FCCAlmostThereConfiguration, FCCCompletionOffTrackConfiguration, NSString, FCCAtypicalDayConfiguration, NSDate;

@interface FCCGoalProgressConfiguration : NSObject <FCCDataSerializable>

@property (readonly, nonatomic) long long minimumNumberOfActiveDays;
@property (readonly, nonatomic) NSDate *userStartOfDay;
@property (readonly, nonatomic) NSDate *userEndOfDay;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) FCCAlmostThereConfiguration *almostThereConfiguration;
@property (readonly, nonatomic) FCCAtypicalDayConfiguration *atypicalDayConfiguration;
@property (readonly, nonatomic) FCCCompletionOffTrackConfiguration *completionOffTrackConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protobuf;
- (id)initWithMinimumNumberOfActiveDays:(long long)a0 userStartOfDay:(id)a1 userEndOfDay:(id)a2 expirationDate:(id)a3 almostThereConfiguration:(id)a4 atypicalDayConfiguration:(id)a5 completionOffTrackConfiguration:(id)a6;
- (id)transportData;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;

@end
