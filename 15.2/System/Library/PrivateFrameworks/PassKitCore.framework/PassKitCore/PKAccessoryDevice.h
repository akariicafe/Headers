@class NSString, NSDictionary, NSData, NSNumber;

@interface PKAccessoryDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *endpointUUID;
@property (readonly, nonatomic) NSData *primaryColorData;
@property (readonly, nonatomic) NSData *secondaryColorData;
@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic, getter=isSleeve) BOOL sleeve;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 endpointUUID:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessoryTypeString;

@end
