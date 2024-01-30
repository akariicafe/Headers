@class NSString, NSItemProvider;

@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1;

@end
