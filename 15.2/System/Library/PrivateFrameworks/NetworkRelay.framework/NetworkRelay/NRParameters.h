@class NSObject;
@protocol OS_nw_parameters;

@interface NRParameters : NSObject {
    NSObject<OS_nw_parameters> *_parameters;
}

@property (nonatomic) unsigned char serviceClass;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyParameters;
- (id)initWithParameters:(id)a0;

@end
