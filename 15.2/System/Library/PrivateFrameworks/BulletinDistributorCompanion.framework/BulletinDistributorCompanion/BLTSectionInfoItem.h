@class NSString, BBSectionInfo;

@interface BLTSectionInfoItem : NSObject

@property (retain, nonatomic) BBSectionInfo *sectionInfo;
@property (readonly, nonatomic) NSString *displayName;

- (void).cxx_destruct;

@end
