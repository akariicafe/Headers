@class RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeEntryPreview : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *value;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *key;

- (id)initWithValue:(id)a0;

@end
