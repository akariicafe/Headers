@interface NSSetChange : NSObject

@property (readonly) unsigned long long changeType;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithType:(unsigned long long)a0 object:(id)a1;

@end
