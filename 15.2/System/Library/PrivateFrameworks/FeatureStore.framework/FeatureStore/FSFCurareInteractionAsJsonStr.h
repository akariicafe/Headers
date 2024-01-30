@class NSString;

@interface FSFCurareInteractionAsJsonStr : NSObject <FSFCurareInteraction> {
    NSString *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
}

@property (readonly, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)deserialize:(id)a0 dataVersion:(unsigned int)a1 interactionId:(id)a2;

- (id)serialize;
- (void).cxx_destruct;
- (id)json;
- (id)initWithJsonStr:(id)a0 interactionId:(id)a1 dataVersion:(unsigned int)a2;

@end
