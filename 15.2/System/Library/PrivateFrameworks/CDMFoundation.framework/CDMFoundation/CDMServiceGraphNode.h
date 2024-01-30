@class NSString;

@interface CDMServiceGraphNode : NSBlockOperation {
    id /* block */ _cancellationBlock;
    NSString *_nodeName;
    NSString *_handlerId;
}

+ (id)initWithName:(id)a0 forHandler:(id)a1 withError:(id /* block */)a2 usingFunction:(id /* block */)a3 selfMetadata:(id)a4;
+ (id)initWithName:(id)a0 forHandler:(id)a1 usingFunction:(id /* block */)a2 withError:(id /* block */)a3 cancellationBlock:(id /* block */)a4 selfMetadata:(id)a5;
+ (id)initWithName:(id)a0 forHandler:(id)a1 withError:(id /* block */)a2 usingFunction:(id /* block */)a3;
+ (id)initWithName:(id)a0 forHandler:(id)a1 usingFunction:(id /* block */)a2 withError:(id /* block */)a3 cancellationBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (void)cancel;
- (id)getHandlerId;
- (id)getNodeName;

@end
