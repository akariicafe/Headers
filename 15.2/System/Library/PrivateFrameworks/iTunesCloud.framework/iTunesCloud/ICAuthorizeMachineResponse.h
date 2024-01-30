@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSData *keybagData;
@property (readonly, copy, nonatomic) NSData *tokenData;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
