@class NSDate;

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double _absoluteDate;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) BOOL dateInWeekend;

- (id)initWithProto:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (BOOL)isEqualToATXPredictionTimeContext:(id)a0;
- (id)encodeAsProto;
- (void)setDate:(id)a0;
- (id)jsonDict;

@end
