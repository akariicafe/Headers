@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding> {
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _hadResolutionErrorsOnLoad;
@property (readonly, nonatomic) BOOL _isDefault;
@property (readonly, nonatomic) BOOL _fromPlist;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) Class delegateClass;
@property (retain, nonatomic) UIStoryboard *storyboard;

+ (id)configurationWithName:(id)a0 sessionRole:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithLoadErrorForSessionRole:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 sessionRole:(id)a1;
- (unsigned long long)hash;

@end
