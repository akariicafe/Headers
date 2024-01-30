@class NSArray, NSString;
@protocol SSPersonalizeOffersDelegate;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {
    NSArray *_items;
}

@property (nonatomic) id<SSPersonalizeOffersDelegate> delegate;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (BOOL)start;
- (void)startWithPersonalizedResponseBlock:(id /* block */)a0;

@end
