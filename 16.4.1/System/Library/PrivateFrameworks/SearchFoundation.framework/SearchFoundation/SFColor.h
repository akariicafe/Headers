@class NSDictionary, NSData, NSString;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying> {
    struct { unsigned char redComponent : 1; unsigned char greenComponent : 1; unsigned char blueComponent : 1; unsigned char alphaComponent : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
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
- (BOOL)hasRedComponent;
- (BOOL)hasAlphaComponent;
- (BOOL)hasBlueComponent;
- (BOOL)hasGreenComponent;

@end
