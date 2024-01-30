@class NSString, NSURL;

@interface SUCompletionItem : NSObject

@property (readonly, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)initWithPropertyList:(id)a0;

@end
