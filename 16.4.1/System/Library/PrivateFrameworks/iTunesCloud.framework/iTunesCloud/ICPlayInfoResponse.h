@class NSData, NSDictionary;

@interface ICPlayInfoResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) NSData *playInfoData;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
