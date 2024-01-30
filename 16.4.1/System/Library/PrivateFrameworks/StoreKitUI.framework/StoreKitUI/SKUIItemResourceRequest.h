@class NSString, NSArray;
@protocol SKUIItemRequestDelegate;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying>

@property (weak, nonatomic) id<SKUIItemRequestDelegate> delegate;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (copy, nonatomic) NSArray *itemIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;

@end
