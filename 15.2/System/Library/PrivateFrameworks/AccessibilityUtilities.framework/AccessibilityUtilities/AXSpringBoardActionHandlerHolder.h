@class NSString;

@interface AXSpringBoardActionHandlerHolder : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;

@end
