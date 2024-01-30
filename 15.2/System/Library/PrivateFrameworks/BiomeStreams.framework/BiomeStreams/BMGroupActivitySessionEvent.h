@class NSString, NSArray;

@interface BMGroupActivitySessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *sourceBundleID;
@property (readonly, copy, nonatomic) NSString *activitySessionID;
@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, copy, nonatomic) NSString *messagesChatGuid;
@property (readonly, copy, nonatomic) NSArray *participantHandles;
@property (readonly, copy, nonatomic) NSArray *memberHandles;
@property (readonly, copy, nonatomic) NSString *experienceType;
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
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithIsActive:(BOOL)a0 sourceBundleID:(id)a1 activitySessionID:(id)a2 activityID:(id)a3 messagesChatGuid:(id)a4 participantHandles:(id)a5 memberHandles:(id)a6 experienceType:(id)a7;

@end
