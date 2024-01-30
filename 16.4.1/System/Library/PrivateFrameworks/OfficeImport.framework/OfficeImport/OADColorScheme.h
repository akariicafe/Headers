@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)colorForIndex:(int)a0;
- (void)setColor:(id)a0 index:(int)a1;
- (void)addColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (void)validateColorScheme;

@end
