@class NSString, NSDictionary, NSData, NSDate, NSNumber;

@interface SFProductInventory : NSObject <SFProductInventory, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; unsigned char availabilityStatus : 1; unsigned char distanceUnit : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (copy, nonatomic) NSNumber *distance;
@property (nonatomic) int distanceUnit;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDistanceUnit;
- (BOOL)hasAvailabilityStatus;

@end
