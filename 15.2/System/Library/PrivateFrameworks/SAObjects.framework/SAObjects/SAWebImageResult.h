@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAWebAcePicture *picture;
@property (copy, nonatomic) NSArray *thumbNails;

+ (id)imageResult;
+ (id)imageResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
