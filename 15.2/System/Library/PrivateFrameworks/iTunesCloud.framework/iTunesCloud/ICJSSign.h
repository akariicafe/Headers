@class ICJSSignConfiguration;

@interface ICJSSign : NSObject {
    ICJSSignConfiguration *_configuration;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)signatureDataWithURLRequest:(id)a0;
- (id)signatureStringWithURLRequest:(id)a0;

@end
