@class NSDictionary, NSString, NSMutableDictionary;

@interface _CurareInternalBiomeFeature : NSObject <FSFFeature, BMStoreData> {
    NSMutableDictionary *_content;
}

@property (readonly, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)interactionId;
- (id)json;
- (id)initWithCurareInteraction:(id)a0;

@end
