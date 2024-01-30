@class NSDictionary, NSData, NSString;

@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying> {
    struct { unsigned char southLat : 1; unsigned char westLng : 1; unsigned char northLat : 1; unsigned char eastLng : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double southLat;
@property (nonatomic) double westLng;
@property (nonatomic) double northLat;
@property (nonatomic) double eastLng;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasEastLng;
- (BOOL)hasWestLng;
- (BOOL)hasNorthLat;
- (BOOL)hasSouthLat;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
