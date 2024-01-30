@class NSString, NSDate;

@interface IMAttachment : NSObject {
    NSString *_guid;
    NSString *_path;
    BOOL _isSticker;
    BOOL _isTransferComplete;
    NSDate *_createdDate;
}

- (id)guid;
- (id)path;
- (void).cxx_destruct;
- (id)createdDate;
- (BOOL)isTransferComplete;
- (BOOL)isSticker;
- (id)description;
- (id)initWithPath:(id)a0 guid:(id)a1;
- (id)initWithPath:(id)a0 guid:(id)a1 createdDate:(id)a2 isSticker:(BOOL)a3 isTransferComplete:(BOOL)a4;
- (id)fileTransfer;

@end
