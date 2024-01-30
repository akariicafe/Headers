@class NSString, NSDictionary, NSData, NSError, NSURL;

@interface RPFileTransferItem : NSObject

@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long estimatedSize;
@property (retain, nonatomic) NSData *fileData;
@property (nonatomic) unsigned long long fileID;
@property (nonatomic) long long fileSize;
@property (nonatomic) unsigned long long metadataSize;
@property (copy, nonatomic) NSData *sha256HashData;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSURL *itemURL;
@property (copy, nonatomic) NSDictionary *metadata;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)a0;

@end
