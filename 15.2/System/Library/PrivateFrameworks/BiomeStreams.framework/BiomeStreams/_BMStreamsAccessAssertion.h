@class NSString, BMStreamsAccessDescriptor;

@interface _BMStreamsAccessAssertion : NSObject <BMStreamsAccessAssertion> {
    long long _handle;
}

@property (readonly, nonatomic) BMStreamsAccessDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescriptor:(id)a0 extensionToken:(id)a1;

@end
