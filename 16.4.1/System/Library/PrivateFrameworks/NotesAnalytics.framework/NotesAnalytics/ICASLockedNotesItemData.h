@class NSString, NSNumber;

@interface ICASLockedNotesItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalCountOfV1LockedNotes;
@property (readonly, nonatomic) NSNumber *totalCountOfV2LockedNotes;
@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotesWithDivergedMode;
@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotesWithDivergedPassword;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfV1LockedNotes:(id)a0 totalCountOfV2LockedNotes:(id)a1 totalCountOfLockedNotesWithDivergedMode:(id)a2 totalCountOfLockedNotesWithDivergedPassword:(id)a3;

@end
