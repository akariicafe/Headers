@class NSString, NSMutableArray;

@interface MMElement : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) int type;
@property (copy, nonatomic) NSMutableArray *innerRanges;
@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long level;
@property (copy, nonatomic) NSString *href;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *stringValue;
@property (weak, nonatomic) MMElement *parent;
@property (copy, nonatomic) NSMutableArray *children;
@property (copy, nonatomic) NSString *language;

- (id)init;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)removeChild:(id)a0;
- (void)addInnerRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeLastInnerRange;
- (id)removeLastChild;

@end
