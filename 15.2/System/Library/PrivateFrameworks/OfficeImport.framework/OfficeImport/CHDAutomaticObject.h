@class NSString;

@interface CHDAutomaticObject : NSObject {
    NSString *mName;
}

+ (id)automaticFill;
+ (id)automaticStroke;
+ (id)automaticEffects;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
