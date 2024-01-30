@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {
    struct CADisplayPreferencesPriv { BOOL x0; int x1; } *_priv;
}

@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;
@property (readonly, nonatomic) int _preferredHdrType;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPreferences:(id)a0;
- (id)init;
- (id)initWithMatchContent:(BOOL)a0 preferredHdrType:(int)a1;

@end
