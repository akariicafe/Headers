@class NSString, NSDictionary, NSURL, NSData;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying> {
    struct { unsigned char buyable : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL buyable;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasBuyable;

@end
