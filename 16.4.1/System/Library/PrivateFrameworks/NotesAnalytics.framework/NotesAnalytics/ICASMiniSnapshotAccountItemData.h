@class NSString, NSNumber;

@interface ICASMiniSnapshotAccountItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countofNotes;
@property (readonly, nonatomic) NSNumber *counfOfFolders;
@property (readonly, nonatomic) NSNumber *countOfAttachments;
@property (readonly, nonatomic) NSString *privateAccountID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountofNotes:(id)a0 counfOfFolders:(id)a1 countOfAttachments:(id)a2 privateAccountID:(id)a3;

@end
