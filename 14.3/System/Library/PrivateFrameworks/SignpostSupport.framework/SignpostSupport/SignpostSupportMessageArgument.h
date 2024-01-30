@class NSObject;

@interface SignpostSupportMessageArgument : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSObject *argumentObject;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArgumentObject:(id)a0;

@end
