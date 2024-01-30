@class NSString, SFColor, SFLatLng, NSData, NSDictionary;

@interface SFPin : NSObject <SFPin, NSSecureCoding, NSCopying> {
    struct { unsigned char pinBehavior : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFLatLng *location;
@property (retain, nonatomic) SFColor *pinColor;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *resultID;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int pinBehavior;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPinBehavior;
- (void)encodeWithCoder:(id)a0;

@end
