@class CNContactStore;

@interface CNCroppedImageDataHelper : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;

+ (id)descriptorForRequiredKeys;
+ (BOOL)croppedImageDataAvailableForContact:(id)a0;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)croppedImageDataForContact:(id)a0;
- (id)squareImageData:(id)a0;

@end
