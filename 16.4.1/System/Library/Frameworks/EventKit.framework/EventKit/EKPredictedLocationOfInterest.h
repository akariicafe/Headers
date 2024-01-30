@class NSString, RTPredictedLocationOfInterest;

@interface EKPredictedLocationOfInterest : NSObject

@property (readonly, nonatomic) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *customLabel;
@property (readonly, copy, nonatomic) NSString *mapItemName;
@property (readonly, copy, nonatomic) NSString *addressCountryCode;
@property (readonly, copy, nonatomic) NSString *addressThoroughfare;
@property (readonly, copy, nonatomic) NSString *addressLocality;

- (void).cxx_destruct;
- (id)initWithPredictedLocationOfInterest:(id)a0;
- (id)initWithType:(long long)a0 customLabel:(id)a1 mapItemName:(id)a2 addressCountryCode:(id)a3 addressThoroughFare:(id)a4 addressLocality:(id)a5;

@end
