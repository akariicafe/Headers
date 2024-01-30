@class NSArray;

@interface JFXEffectAssetRequestOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *filterOptionsArray;
@property (nonatomic, getter=isNetworkAccessDisabled) BOOL networkAccessDisabled;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
