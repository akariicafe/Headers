@class NSString;

@interface IMMessageActionItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;
@property (retain, nonatomic) NSString *originalMessageGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
