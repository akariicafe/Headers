@interface PHAssetResourceRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL resistentToPrune;
@property (nonatomic) BOOL downloadIsTransient;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
