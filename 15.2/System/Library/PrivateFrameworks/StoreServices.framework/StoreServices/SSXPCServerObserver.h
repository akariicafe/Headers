@interface SSXPCServerObserver : NSObject

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
