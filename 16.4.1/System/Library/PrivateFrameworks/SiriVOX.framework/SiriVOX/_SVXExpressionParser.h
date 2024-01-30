@class AFPreferences;
@protocol SVXExpressionParsingServing;

@interface _SVXExpressionParser : NSObject

@property (readonly, nonatomic) id<SVXExpressionParsingServing> parsingService;
@property (readonly, nonatomic) AFPreferences *preferences;

- (void).cxx_destruct;
- (id)initWithParsingService:(id)a0 preferences:(id)a1;

@end
