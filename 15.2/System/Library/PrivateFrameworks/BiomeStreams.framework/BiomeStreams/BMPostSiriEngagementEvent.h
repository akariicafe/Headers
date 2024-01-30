@class NSString, NSDictionary;

@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *uiSessionId;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, nonatomic) BOOL isPostSiriEngagement;
@property (readonly, nonatomic) double pseDeltaDuration;
@property (readonly, nonatomic) double pseDeltaSinceUIStart;
@property (readonly, nonatomic) double pseDeltaSinceUIEnd;
@property (readonly, nonatomic) NSDictionary *pseContents;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithUISessionId:(id)a0 domain:(id)a1 action:(id)a2 isPostSiriEngagement:(BOOL)a3 pseDeltaDuration:(double)a4 pseDeltaSinceUIStart:(double)a5 pseDeltaSinceUIEnd:(double)a6 pseContents:(id)a7;

@end
