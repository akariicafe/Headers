@class NSString;

@interface Application : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *sceneId;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
