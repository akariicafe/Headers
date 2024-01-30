@class NSURL, NSDictionary;

@interface ICStoreRadioStreamAssetInfo : NSObject {
    NSDictionary *_itemResponseDictionary;
}

@property (readonly, nonatomic) long long flavor;
@property (readonly, nonatomic) long long streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;

- (id)initWithItemResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)ICStoreRadioStreamFlavorWithString:(id)a0;
- (long long)ICStoreRadioStreamProtocolWithString:(id)a0;

@end
