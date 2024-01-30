@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject

@property (retain) NSUUID *UUID;
@property (copy) id /* block */ updateBlock;

- (id)initWithUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
