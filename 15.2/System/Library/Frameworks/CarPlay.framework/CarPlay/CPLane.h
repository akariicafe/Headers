@class NSArray, NSString, NSMeasurement;

@interface CPLane : NSObject <CPAccNavUpdateProtocol, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned short index;
@property (nonatomic) unsigned char status;
@property (retain, nonatomic) NSMeasurement *primaryAngle;
@property (retain, nonatomic) NSArray *secondaryAngles;


- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
