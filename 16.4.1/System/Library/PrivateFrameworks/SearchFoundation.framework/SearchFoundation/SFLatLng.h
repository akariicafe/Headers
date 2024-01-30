@class NSDictionary, NSData, NSString;

@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying> {
    struct { unsigned char lat : 1; unsigned char lng : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasLat;
- (BOOL)hasLng;

@end
