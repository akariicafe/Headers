@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject

@property (readonly, nonatomic) NSArray *completionItems;
@property (readonly, nonatomic) NSString *title;

- (id)initWithPropertyList:(id)a0;
- (void)dealloc;
- (id)init;

@end
