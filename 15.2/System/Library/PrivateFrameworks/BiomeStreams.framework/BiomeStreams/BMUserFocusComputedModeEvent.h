@class NSString;

@interface BMUserFocusComputedModeEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *semanticModeIdentifier;
@property (nonatomic) unsigned long long modeUpdateReason;
@property (nonatomic) long long modeSemanticType;
@property (nonatomic) long long modeUpdateSource;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithMode:(id)a0 starting:(BOOL)a1 modeUpdateReason:(unsigned long long)a2 modeSemanticType:(long long)a3 modeUpdateSource:(long long)a4;
- (id)initWithMode:(id)a0 semanticModeIdentifier:(id)a1 starting:(BOOL)a2 modeUpdateReason:(unsigned long long)a3 modeSemanticType:(long long)a4 modeUpdateSource:(long long)a5;
- (id)initWithMode:(id)a0 starting:(BOOL)a1;
- (id)initWithMode:(id)a0 starting:(BOOL)a1 modeUpdateReason:(unsigned long long)a2 modeSemanticType:(long long)a3;

@end
