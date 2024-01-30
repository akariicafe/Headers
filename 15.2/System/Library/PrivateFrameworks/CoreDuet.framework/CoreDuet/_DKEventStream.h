@class NSString, _CDEventStreamProperties, _DKObjectType;

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) _CDEventStreamProperties *eventProperties;
@property (readonly) NSString *name;
@property (readonly) _DKObjectType *eventValueType;

+ (id)eventStreamWithName:(id)a0 valueType:(id)a1;
+ (id)fromPBCodable:(id)a0;
+ (id)eventStreamWithName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)toPBCodable;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 valueType:(id)a1 cache:(id)a2;

@end
