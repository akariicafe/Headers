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
- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)startWithPersonalizedResponseBlock:(id /* block */)a0;

@end
