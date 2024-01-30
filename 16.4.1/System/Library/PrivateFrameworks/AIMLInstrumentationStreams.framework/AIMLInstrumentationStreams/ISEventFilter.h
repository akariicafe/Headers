@interface ISEventFilter : NSObject {
    void /* unknown type, empty encoding */ filter;
}

@property (class, nonatomic, readonly) ISEventFilter *everything;

+ (id)allOf:(Class)a0;
+ (id)someOf:(Class)a0 types:(id)a1;

- (id)combine:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
