@protocol PXGViewUserData;

@interface PXGViewPayload : NSObject <NSCopying>

@property (readonly, nonatomic) Class viewClass;
@property (readonly, copy, nonatomic) id<PXGViewUserData> userData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewClass:(Class)a0 userData:(id)a1;

@end
