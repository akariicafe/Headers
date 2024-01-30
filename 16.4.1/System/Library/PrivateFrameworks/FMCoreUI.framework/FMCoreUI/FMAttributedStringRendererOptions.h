@class NSArray;

@interface FMAttributedStringRendererOptions : NSObject

@property (readonly, nonatomic) long long lineBreakMode;
@property (readonly, nonatomic) double lineFragmentPadding;
@property (readonly, nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic) double hyphenationFactor;
@property (readonly, copy, nonatomic) NSArray *exclusionPaths;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLineBreakMode:(long long)a0 lineFragmentPadding:(double)a1 maximumNumberOfLines:(unsigned long long)a2 hyphenationFactor:(double)a3 exclusionPaths:(id)a4;

@end
