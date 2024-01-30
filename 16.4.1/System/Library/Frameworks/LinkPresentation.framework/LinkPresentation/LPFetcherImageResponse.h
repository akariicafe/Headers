@class LPImage, NSString;

@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse>

@property (readonly, retain, nonatomic) LPImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imagePropertiesForFetcher:(id)a0;
+ (BOOL)isValidMIMEType:(id)a0;
+ (id)responseForFetcher:(id)a0 withData:(id)a1 MIMEType:(id)a2;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 fetcher:(id)a1;

@end
