@class NSString, CLLocation, NSDate;

@interface NUNIMoonPhaseModel : NSObject

@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *phaseName;
@property (readonly, nonatomic) unsigned long long phaseNumber;
@property (readonly, nonatomic) long long hemisphere;
@property (readonly, nonatomic) long long event;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 location:(id)a1;

@end
