@class NSData, FCInterestToken, NSString;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider>

@property (readonly, nonatomic) FCInterestToken *holdToken;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL isRawFileConsumable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)initWithFilePath:(id)a0 holdToken:(id)a1;

@end
