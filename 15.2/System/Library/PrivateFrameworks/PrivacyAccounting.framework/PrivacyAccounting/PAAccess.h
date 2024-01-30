@class NSArray, NSString, PAApplication, NSUUID;

@interface PAAccess : NSObject <NSCopying, NSSecureCoding, BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) NSArray *allAccessClasses;
@property (class, readonly, nonatomic) NSString *eventStreamIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PAApplication *accessor;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) double timestampAdjustment;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *descriptionForCategory;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithAccessor:(id)a0;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2;
- (id)initWithProto:(id)a0;
- (id)copyWithNewAccessor:(id)a0;
- (id)copyWithNewIdentifier:(id)a0;
- (id)JSONObject;
- (id)copyWithNewTimestampAdjustment:(double)a0;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)descriptionForKind;
- (id)copyWithNewKind:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)json;

@end
