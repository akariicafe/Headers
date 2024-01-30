@class KNSlideNode;

@interface KNSlideNodeBlockOperation : NSBlockOperation

@property (readonly, nonatomic) KNSlideNode *slideNode;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithSlideNode:(id)a0 type:(long long)a1;

@end
