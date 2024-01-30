@class NSObject, NSData, NSURL, UARPAssetID, NSFileHandle;
@protocol OS_os_log;

@interface UARPAsset : NSObject {
    NSURL *_url;
    NSFileHandle *_filehandle;
    NSObject<OS_os_log> *_log;
    long long _onceToken;
}

@property (readonly) UARPAssetID *id;
@property (readonly) NSData *data;
@property (readonly) unsigned long long fileLength;

- (id)initWithID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)concludeLocalFileAccess;
- (id)getDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithID:(id)a0 withBuffer:(id)a1;
- (BOOL)prepareLocalFileForUse:(id *)a0;
- (BOOL)setData:(id)a0 atOffset:(unsigned long long)a1 error:(id *)a2;

@end
