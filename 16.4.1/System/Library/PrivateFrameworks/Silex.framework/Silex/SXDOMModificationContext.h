@class SXLayoutOptions, NSString;

@interface SXDOMModificationContext : NSObject <SXDOMModificationContext>

@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly, nonatomic) NSString *specVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayoutOptions:(id)a0 specVersion:(id)a1;

@end
