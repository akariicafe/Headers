@class NSString;

@interface NTKApricotComplicationInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *localizedDisplayName;
@property (retain, nonatomic) NSString *localizedAppName;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAppName:(id)a0 displayName:(id)a1;

@end
