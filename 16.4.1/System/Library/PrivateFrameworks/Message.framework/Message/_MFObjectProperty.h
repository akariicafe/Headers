@interface _MFObjectProperty : NSObject

@property (nonatomic) Class class;
@property (nonatomic) SEL property;

+ (id)objectPropertyWithClass:(Class)a0 property:(SEL)a1;

@end
