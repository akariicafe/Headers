@class CKRecord;
@protocol WFCloudKitItem;

@interface WFCloudKitItemRecord : NSObject

@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) id<WFCloudKitItem> item;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 item:(id)a1;

@end
