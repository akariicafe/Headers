@class NSString, NSDictionary, NSMutableDictionary;

@interface MPMediaKitEntityPayloadTransformer : NSObject

@property (readonly, nonatomic) NSString *transformedType;
@property (readonly, nonatomic) NSDictionary *transformedPayload;
@property (readonly, nonatomic) NSMutableDictionary *relationships;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSMutableDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *meta;

- (id)initWithType:(id)a0 transformedType:(id)a1;
- (void).cxx_destruct;

@end
