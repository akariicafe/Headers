@class NSDictionary, NSMutableDictionary;

@interface NUGenericComposition : NUComposition {
    NSMutableDictionary *_contents;
}

@property (copy, nonatomic) NSDictionary *contents;

- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithCompositionSchema:(id)a0;

@end
