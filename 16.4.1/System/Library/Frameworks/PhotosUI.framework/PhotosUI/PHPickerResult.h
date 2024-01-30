@class NSString, NSItemProvider;

@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSString *_personIdentifier;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1 personIdentifier:(id)a2;

@end
