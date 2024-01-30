@class NSString, NSDate;

@interface MTSyncDismiss : NSObject <SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *dismissDate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) float syncVersion;
@property (readonly, nonatomic) unsigned long long syncType;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deserialize:(id)a0;
+ (id)syncDismissOfObjectWithIdentifier:(id)a0 dismissDate:(id)a1 date:(id)a2 version:(float)a3;
+ (id)syncDismissOfObjectWithIdentifier:(id)a0 dismissDate:(id)a1 date:(id)a2;

- (void)serializeWithSerializer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFromDeserializer:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDismissedObjectIdentifier:(id)a0 dismissDate:(id)a1 date:(id)a2 version:(float)a3;
- (BOOL)conflicts:(id)a0;
- (id)preferred:(id)a0;

@end
