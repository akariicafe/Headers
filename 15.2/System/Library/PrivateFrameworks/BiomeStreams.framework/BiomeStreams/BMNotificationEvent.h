@class NSString, NSArray;

@interface BMNotificationEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) unsigned long long usageType;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long badge;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) NSArray *contactIDs;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(double)a1 usageType:(unsigned long long)a2 bundleID:(id)a3 notificationID:(id)a4 deviceID:(id)a5 title:(id)a6 subtitle:(id)a7 badge:(unsigned long long)a8 threadID:(id)a9 categoryID:(id)a10 sectionID:(id)a11 contactIDs:(id)a12 isGroupMessage:(BOOL)a13;

@end
