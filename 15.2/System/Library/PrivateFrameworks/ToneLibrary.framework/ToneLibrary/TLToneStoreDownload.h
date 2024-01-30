@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownload : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    double _duration;
    NSString *_genreName;
    BOOL _isRingtone;
    unsigned long long _storeItemIdentifier;
    float _downloadProgress;
    NSString *_toneIdentifier;
}

@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (copy, nonatomic, setter=_setAlbumTitle:) NSString *albumTitle;
@property (copy, nonatomic, setter=_setArtistName:) NSString *artistName;
@property (nonatomic, setter=_setDuration:) double duration;
@property (copy, nonatomic, setter=_setGenreName:) NSString *genreName;
@property (nonatomic, getter=isRingtone, setter=_setRingtone:) BOOL ringtone;
@property (nonatomic, setter=_setStoreItemIdentifier:) unsigned long long storeItemIdentifier;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (copy, nonatomic, setter=_setToneIdentifier:) NSString *toneIdentifier;
@property (readonly, nonatomic) NSString *identifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;

@end
