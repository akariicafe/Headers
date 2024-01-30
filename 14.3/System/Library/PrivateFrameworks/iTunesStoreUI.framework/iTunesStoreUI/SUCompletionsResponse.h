@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject

@property (readonly, nonatomic) NSArray *completionItems;
@property (readonly, nonatomic) NSString *title;

- (id)init;
- (void)dealloc;
- (id)initWithPropertyList:(id)a0;

@end
