@class NSString;

@interface GKImageKey : NSObject {
    NSString *_filePath;
    NSString *_cacheKey;
}

@property (retain, nonatomic) NSString *imageID;
@property (retain, nonatomic) NSString *basename;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)fileNameWithIdentifierInImageSource:(id)a0;
+ (id)keyForImageIdentifier:(id)a0 withImageSource:(id)a1;

- (void).cxx_destruct;

@end
