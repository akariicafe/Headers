@class NSString;

@interface BMMediaAction : BMEventBase <BMStoreData>

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *mediaUUID;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithAbsoluteTimestamp:(double)a0 mediaUUID:(id)a1 type:(int)a2;

@end
