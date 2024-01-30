@class NSArray, CNMutableContact;

@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) NSArray *groupChangeRequest;

- (id)initWithContentItem:(id)a0;
- (void).cxx_destruct;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
