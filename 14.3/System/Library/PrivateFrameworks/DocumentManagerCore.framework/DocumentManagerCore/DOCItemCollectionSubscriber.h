@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject

@property (retain) NSUUID *UUID;
@property (copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;

@end
