@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)colorForIndex:(int)a0;
- (void)addColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (void)validateColorScheme;
- (void)setColor:(id)a0 index:(int)a1;

@end
