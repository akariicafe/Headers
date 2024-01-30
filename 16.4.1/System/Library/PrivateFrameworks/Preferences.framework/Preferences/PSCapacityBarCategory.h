@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying>

@property unsigned long long bytes;
@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (retain) UIColor *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 color:(id)a2 bytes:(long long)a3;

@end
