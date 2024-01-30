@class NSString, NSArray, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject

@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSString *localFilePath;
@property (copy, nonatomic) NSArray *sinfs;
@property (copy, nonatomic) NSURL *sourceURL;

- (void).cxx_destruct;

@end
