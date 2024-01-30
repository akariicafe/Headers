@class NSString;

@interface CKInboxCellData : NSObject {
    void /* unknown type, empty encoding */ title;
}

@property (class, nonatomic, readonly) CKInboxCellData *allMessagesCellData;
@property (class, nonatomic, readonly) CKInboxCellData *knownSendersCellData;
@property (class, nonatomic, readonly) CKInboxCellData *unknownSendersCellData;
@property (class, nonatomic, readonly) CKInboxCellData *unreadMessagesCellData;
@property (class, nonatomic, readonly) CKInboxCellData *oscarCellData;
@property (class, nonatomic, readonly) CKInboxCellData *recentlyDeletedCellData;
@property (class, nonatomic, readonly) CKInboxCellData *transactionalCellData;
@property (class, nonatomic, readonly) CKInboxCellData *promotionalCellData;
@property (class, nonatomic, readonly) CKInboxCellData *junkCellData;
@property (class, nonatomic, readonly) CKInboxCellData *blackholeJunkCellData;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ image;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ filterMode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1 filterMode:(unsigned long long)a2;

@end
