@class NSNumber, NSString, NSDate;

@interface EDAttachmentMetadata : NSObject

@property (retain, nonatomic) NSNumber *attachmentID;
@property (readonly, nonatomic) NSString *attachmentHash;
@property (readonly, nonatomic) NSString *nameOnDisk;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) NSDate *downloadDate;
@property (readonly, nonatomic) NSNumber *viewCount;
@property (readonly, nonatomic) NSDate *lastViewed;
@property (readonly, nonatomic) NSNumber *viewCountByTapped;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttachmentID:(id)a0 attachmentHash:(id)a1 nameOnDisk:(id)a2 size:(id)a3 downloadDate:(id)a4 viewCount:(id)a5 lastViewed:(id)a6 viewCountByTapped:(id)a7;
- (id)initWithAttachmentHash:(id)a0 nameOnDisk:(id)a1 size:(id)a2 downloadDate:(id)a3;
- (id)initWithAttachmentID:(id)a0 nameOnDisk:(id)a1;

@end
