@class NSArray;

@interface JFXEffectAssetRequestOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *filterOptionsArray;
@property (nonatomic, getter=isNetworkAccessDisabled) BOOL networkAccessDisabled;
@property (nonatomic) long long priority;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
