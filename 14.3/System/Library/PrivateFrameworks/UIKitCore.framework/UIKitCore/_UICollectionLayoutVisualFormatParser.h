@class NSString, NSArray;

@interface _UICollectionLayoutVisualFormatParser : NSObject

@property (nonatomic) unsigned long long axis;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *visualFormat;
@property (copy, nonatomic) NSArray *items;

+ (id)parsersWithVisualFormats:(id)a0 seperatedByDelimiter:(id)a1;
+ (unsigned long long)axisForVisualFormat:(id)a0;
+ (id)parserWithVisualFormat:(id)a0;

- (void)_parse;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVisualFormat:(id)a0;

@end
