@class NSString, WFContentItem;

@interface WFContentItemChangeTransaction : NSObject

@property (copy, nonatomic) NSString *mode;
@property (readonly, nonatomic) WFContentItem *contentItem;

- (id)initWithContentItem:(id)a0;
- (void).cxx_destruct;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
