@class NSString;

@interface TeaUI.ImageAssetHandle : NSObject <TSAssetHandleType> {
    void /* unknown type, empty encoding */ uniqueKey;
}

@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, retain) void /* unknown type, empty encoding */ fallbackImage;
@property (nonatomic, copy) NSString *uniqueKey;

- (id)init;
- (void).cxx_destruct;
- (void)downloadWithGroup:(id)a0;

@end
