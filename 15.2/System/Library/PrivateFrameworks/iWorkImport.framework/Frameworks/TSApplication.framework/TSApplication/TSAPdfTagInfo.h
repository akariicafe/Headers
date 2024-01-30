@class NSDictionary;

@interface TSAPdfTagInfo : NSObject

@property (readonly, nonatomic) int tagType;
@property (readonly, nonatomic) NSDictionary *tagProperties;

+ (id)tagPropertiesWithActualText:(id)a0 alternativeText:(id)a1 titleText:(id)a2;

- (void).cxx_destruct;
- (id)initWithTagType:(int)a0 tagProperties:(id)a1;

@end
