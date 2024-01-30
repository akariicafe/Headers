@class NSString, NSDictionary;

@interface FSFCurareEvaluationFeature : NSObject <FSFFeature, BMStoreData> {
    unsigned int _dataVersion;
    NSDictionary *_content;
}

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)json;
- (id)content;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0 dataVersion:(unsigned int)a1;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1;
- (id)interactionId;
- (id)initWithContentJson:(id)a0 dataVersion:(unsigned int)a1;

@end
