@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *valuePreview;
@property (nonatomic) BOOL internal;

- (id)initWithName:(id)a0 type:(long long)a1;

@end
