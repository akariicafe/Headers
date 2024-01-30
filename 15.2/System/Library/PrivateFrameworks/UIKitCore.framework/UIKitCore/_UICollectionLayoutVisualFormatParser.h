@class NSString, NSArray;

@interface _UICollectionLayoutVisualFormatParser : NSObject

@property (nonatomic) unsigned long long axis;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *visualFormat;
@property (copy, nonatomic) NSArray *items;

+ (id)parsersWithVisualFormats:(id)a0 seperatedByDelimiter:(id)a1;
+ (id)parserWithVisualFormat:(id)a0;
+ (unsigned long long)axisForVisualFormat:(id)a0;

- (void)_parse;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVisualFormat:(id)a0;

@end
