@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject

@property (retain, nonatomic) HMCharacteristicRequest *request;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
