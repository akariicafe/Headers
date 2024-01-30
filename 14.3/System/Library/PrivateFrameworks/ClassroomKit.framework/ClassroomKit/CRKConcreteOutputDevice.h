@class AVOutputDevice, AVOutputContext, NSString;

@interface CRKConcreteOutputDevice : NSObject <CRKOutputDevice>

@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)outputOptionsWithPassword:(id)a0 suppressPrompt:(BOOL)a1;

- (void).cxx_destruct;
- (void)displayToDeviceWithPassword:(id)a0 suppressPrompt:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithOutputDevice:(id)a0 outputContext:(id)a1;

@end
