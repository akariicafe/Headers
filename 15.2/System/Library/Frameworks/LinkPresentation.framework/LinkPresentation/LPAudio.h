@class NSString, LPAudioProperties, NSData, AVURLAsset, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding> {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    LPAudioProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) AVURLAsset *_asset;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, retain, nonatomic) NSURL *streamingURL;
@property (readonly, copy, nonatomic) LPAudioProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id)initWithStreamingURL:(id)a0 properties:(id)a1;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (BOOL)_isSubstitute;
- (void)_mapDataFromFileURL;
- (id)_initWithAudio:(id)a0;

@end
