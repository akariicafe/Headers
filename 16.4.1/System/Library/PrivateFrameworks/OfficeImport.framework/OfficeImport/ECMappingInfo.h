@class NSString;

@interface ECMappingInfo : NSObject

@property (readonly, nonatomic) NSString *sheetName;
@property (readonly, nonatomic) int rowOffset;
@property (readonly, nonatomic) int columnOffset;

+ (id)mappingInfoWithSheetName:(id)a0;

- (void).cxx_destruct;
- (id)initWithSheetName:(id)a0;

@end
