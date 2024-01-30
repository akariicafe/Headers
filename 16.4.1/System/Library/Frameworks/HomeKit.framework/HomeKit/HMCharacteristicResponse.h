@class HMCharacteristicRequest;

@interface HMCharacteristicResponse : HMResponseBase

@property (readonly, nonatomic) HMCharacteristicRequest *request;

- (BOOL)isEqual:(id)a0;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 value:(id)a1 error:(id)a2;

@end
