@class NSUUID, NSArray;

@interface ATXLocationOfInterest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *visits;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (BOOL)isEqualToLocation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 visits:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 type:(long long)a3;
- (id)initWithUUID:(id)a0 visits:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void)addVisitFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
