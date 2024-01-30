@class ICJSSignConfiguration;

@interface ICJSSign : NSObject {
    ICJSSignConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)signatureDataWithURLRequest:(id)a0;
- (id)signatureStringWithURLRequest:(id)a0;

@end
