@class NSString;

@interface NTKExtragalacticGlyphDescription : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 color:(unsigned long long)a1 style:(unsigned long long)a2;

@end
