@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long styleIndex;
@property (readonly, nonatomic) double rotation;

+ (id)renderInfoWithString:(id)a0 styleIndex:(unsigned long long)a1 rotation:(double)a2;

- (void)dealloc;
- (id)initWithString:(id)a0 styleIndex:(unsigned long long)a1 rotation:(double)a2;

@end
