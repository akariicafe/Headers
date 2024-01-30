@class NSString, NSUUID, NSDate;

@interface _GDSBalancingAuthorityOutput : NSObject

@property (readonly, nonatomic) double latStart;
@property (readonly, nonatomic) double latEnd;
@property (readonly, nonatomic) double longStart;
@property (readonly, nonatomic) double longEnd;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *ID;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 name:(id)a1 updateDate:(id)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 latitudeStart:(double)a2 latitudeEnd:(double)a3 longitudeStart:(double)a4 longitudeEnd:(double)a5 updateDate:(id)a6;

@end
