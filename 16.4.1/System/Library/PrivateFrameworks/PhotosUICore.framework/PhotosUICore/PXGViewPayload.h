@protocol PXGViewUserData;

@interface PXGViewPayload : NSObject <NSCopying>

@property (readonly, nonatomic) Class viewClass;
@property (readonly, copy, nonatomic) id<PXGViewUserData> userData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithViewClass:(Class)a0 userData:(id)a1;

@end
