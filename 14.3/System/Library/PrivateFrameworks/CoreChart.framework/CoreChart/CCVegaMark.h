@class JSValue, NSString, CALayer;

@interface CCVegaMark : NSObject <CCVegaMarkInterface> {
    JSValue *_items;
}

@property (retain) JSValue *mark;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) BOOL clip;
@property (readonly, nonatomic) BOOL interactive;
@property (readonly, nonatomic) NSString *marktype;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) double zindex;
@property (retain, nonatomic) CALayer *caLayer;
@property (nonatomic) BOOL isDirty;

- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithJSValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)getString:(id)a0 defaultValue:(id)a1;

@end
