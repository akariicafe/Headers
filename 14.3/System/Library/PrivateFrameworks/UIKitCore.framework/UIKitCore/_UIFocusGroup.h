@class NSString;
@protocol UIFocusEnvironment;

@interface _UIFocusGroup : NSObject {
    _UIFocusGroup *_parentGroup;
}

@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic) _UIFocusGroup *parentGroup;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> rootEnvironment;

+ (id)nullGroup;
+ (id)invalidGroup;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 rootEnvironment:(id)a1;
- (id)childGroupWithIdentifier:(id)a0;
- (id)childGroupWithIdentifier:(id)a0 rootEnvironment:(id)a1;
- (BOOL)isEqualToFocusGroup:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_commonAncestorWithGroup:(id)a0;

@end
