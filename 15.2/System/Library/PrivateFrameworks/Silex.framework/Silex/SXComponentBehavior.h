@class NSString;

@interface SXComponentBehavior : SXJSONObject

@property (readonly, nonatomic) NSString *type;

- (Class)handlerClassForComponent:(id)a0;

@end
