@class NSString, ICASTagRenameApproach;

@interface ICASTagRenameData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASTagRenameApproach *tagRenameApproach;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTagRenameApproach:(id)a0;

@end
