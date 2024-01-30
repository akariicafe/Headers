@class NSString, NSURL, NSData, NSDate;

@interface SHDataFetcherFileInfo : NSObject

@property (readonly, nonatomic) NSURL *dataFilePathURL;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *suggestedFileName;
@property (readonly, copy, nonatomic) NSString *suggestedExtension;
@property (readonly, nonatomic) int compressionType;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *uniqueHash;
@property (copy, nonatomic) NSString *mimeType;

+ (id)dataFetcherForSourceURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithDataURL:(id)a0;
- (id)initWithData:(id)a0 suggestedFileName:(id)a1;
- (id)initWithDataURL:(id)a0 suggestedFileName:(id)a1;

@end
