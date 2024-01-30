@class NSString, ICASImportFileType, NSNumber;

@interface ICASImportItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASImportFileType *importFileType;
@property (readonly, nonatomic) NSNumber *importItemCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithImportFileType:(id)a0 importItemCount:(id)a1;

@end
