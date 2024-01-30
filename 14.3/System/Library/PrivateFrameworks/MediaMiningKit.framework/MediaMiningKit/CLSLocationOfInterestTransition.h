@class NSUUID, NSDateInterval;

@interface CLSLocationOfInterestTransition : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDateInterval *transitionInterval;
@property (readonly, nonatomic) long long transportationMode;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 transitionInterval:(id)a1 transportationMode:(long long)a2;

@end
