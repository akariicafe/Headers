@class NSArray, ATXFaceGalleryConfiguration, NSDictionary, NSString;

@interface ATXFaceGalleryEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (nonatomic) long long eventType;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)galleryDidAppearEventWithConfiguration:(id)a0;
+ (id)galleryDidDisappearEvent;
+ (id)itemsDidAppearEventWithItems:(id)a0;

- (id)initWithProto:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 configuration:(id)a1 items:(id)a2;

@end
