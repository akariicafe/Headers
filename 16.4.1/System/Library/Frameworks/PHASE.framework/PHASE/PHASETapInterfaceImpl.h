@class PHASETapRegistry, NSString;

@interface PHASETapInterfaceImpl : NSObject <PHASETapInterface> {
    PHASETapRegistry *_tapRegistry;
}

@property (readonly, weak, nonatomic) PHASETapRegistry *tapRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTapRegistry:(id)a0;

@end
