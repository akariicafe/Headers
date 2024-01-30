@class NSObject;
@protocol OS_nw_parameters;

@interface NRParameters : NSObject {
    NSObject<OS_nw_parameters> *_parameters;
}

@property (nonatomic) unsigned char serviceClass;

- (id)initWithParameters:(id)a0;
- (id)init;
- (id)copyParameters;
- (id)description;
- (void).cxx_destruct;

@end
