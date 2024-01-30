@class NSString;

@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable> {
    _Atomic BOOL _called;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)ignore;
+ (id)cancelableWithBlock:(id /* block */)a0;

@end
