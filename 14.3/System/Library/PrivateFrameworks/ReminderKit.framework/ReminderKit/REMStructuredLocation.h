@class NSString, NSData;

@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double minimumRegionMonitoringDistance;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *locationUID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *routing;
@property (copy, nonatomic) NSString *referenceFrameString;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSData *mapKitHandle;

- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 locationUID:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTitle:(id)a0 locationUID:(id)a1 latitude:(double)a2 longitude:(double)a3 radius:(double)a4 address:(id)a5 routing:(id)a6 referenceFrameString:(id)a7 contactLabel:(id)a8 mapKitHandle:(id)a9;
- (BOOL)isContentEqual:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;

@end
