@class NSString, NSItemProvider;

@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1;

@end
