@class NSString, NSObject;
@protocol OS_dispatch_queue, TSULogContext;

@interface TSKCustomLogContext : NSObject <TSULogContext> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSULogContext> _parentLogContext;
}

@property (retain) id<TSULogContext> parentLogContext;
@property (readonly) id<TSULogContext> baseLogContext;
@property (readonly) NSString *publicStringComponent;
@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParentLogContext:(id)a0;

@end
