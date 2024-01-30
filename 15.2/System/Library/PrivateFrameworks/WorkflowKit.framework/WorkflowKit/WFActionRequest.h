@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject

@property (retain, nonatomic) WFAction *result;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;

- (id)description;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 serializedParameters:(id)a1;

@end
