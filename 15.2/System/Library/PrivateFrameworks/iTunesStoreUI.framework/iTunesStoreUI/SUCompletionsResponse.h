@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject

@property (readonly, nonatomic) NSArray *completionItems;
@property (readonly, nonatomic) NSString *title;

- (id)initWithPropertyList:(id)a0;
- (id)init;
- (void)dealloc;

@end
