@class NSURL, CKRecordID, NSString;

@interface CKDDeclineShareMetadata : NSObject

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *participantID;

- (void).cxx_destruct;

@end
