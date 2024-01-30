@class NSObject;
@protocol OS_nw_parameters;

@interface NRParameters : NSObject

@property (retain, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic) unsigned char serviceClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyParameters;
- (id)initWithParameters:(id)a0;
- (id)description;

@end
