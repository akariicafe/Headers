@class NSString;

@interface CHDAutomaticObject : NSObject {
    NSString *mName;
}

+ (id)automaticFill;
+ (id)automaticStroke;
+ (id)automaticEffects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithName:(id)a0;

@end
