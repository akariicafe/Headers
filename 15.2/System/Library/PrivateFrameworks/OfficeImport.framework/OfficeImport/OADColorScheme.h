@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)colorForIndex:(int)a0;
- (void)addColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (void)validateColorScheme;
- (void)setColor:(id)a0 index:(int)a1;

@end
