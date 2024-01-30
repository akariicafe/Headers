@class NSArray, NSDictionary, NSString, NSDate;

@interface MTTimeInBedSession : NSObject <MTSleepSession>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *intervals;
@property (nonatomic) unsigned long long endReason;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL needsAdditionalProcessing;
@property (readonly, nonatomic) long long sampleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeInBedSessionWithStartDate:(id)a0 endDate:(id)a1 intervals:(id)a2 endReason:(unsigned long long)a3 metadata:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 intervals:(id)a2 endReason:(unsigned long long)a3 metadata:(id)a4;

@end
