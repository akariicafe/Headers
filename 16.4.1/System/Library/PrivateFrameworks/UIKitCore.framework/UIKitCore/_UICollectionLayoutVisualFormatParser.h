@class NSString, NSArray;

@interface _UICollectionLayoutVisualFormatParser : NSObject

@property (nonatomic) unsigned long long axis;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *visualFormat;
@property (copy, nonatomic) NSArray *items;

+ (unsigned long long)axisForVisualFormat:(id)a0;
+ (id)parserWithVisualFormat:(id)a0;
+ (id)parsersWithVisualFormats:(id)a0 seperatedByDelimiter:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)_parse;
- (id)initWithVisualFormat:(id)a0;

@end
