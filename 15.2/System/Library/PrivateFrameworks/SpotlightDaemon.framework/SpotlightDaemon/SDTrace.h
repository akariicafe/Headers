@class NSString, SDTraceItem;

@interface SDTrace : NSObject {
    SDTraceItem *_items[32];
}

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) int current;

+ (void)initialize;

- (id)initWithTitle:(id)a0;
- (long long)addLabel:(id)a0 identifier:(long long)a1 duration:(double)a2 string:(id)a3 data:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)items;

@end
