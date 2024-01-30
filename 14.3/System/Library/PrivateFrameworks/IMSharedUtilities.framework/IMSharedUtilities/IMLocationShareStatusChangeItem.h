@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL actionable;
@property (nonatomic) BOOL expired;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyDictionaryRepresentation;
- (BOOL)isLastMessageCandidate;
- (void)encodeWithCoder:(id)a0;

@end
