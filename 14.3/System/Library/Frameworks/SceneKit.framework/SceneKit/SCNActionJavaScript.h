@class NSString;

@interface SCNActionJavaScript : SCNAction {
    NSString *_script;
}

+ (BOOL)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)a0 script:(id)a1;

- (id)parameters;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (BOOL)isCustom;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;

@end
