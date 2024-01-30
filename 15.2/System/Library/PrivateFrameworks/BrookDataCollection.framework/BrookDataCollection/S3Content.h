@class NSString, NSData;

@interface S3Content : NSObject {
    NSData *_gzipContentCache;
}

@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *bucket;
@property (retain, nonatomic) NSData *content;
@property (readonly, nonatomic) NSData *gzipContent;
@property (readonly, nonatomic) NSString *mimeType;
@property (nonatomic) BOOL gzip;

- (void).cxx_destruct;
- (id)_gzipCompressData:(id)a0;
- (id)initWithContent:(id)a0 filename:(id)a1 bucket:(id)a2 gzip:(BOOL)a3;

@end
