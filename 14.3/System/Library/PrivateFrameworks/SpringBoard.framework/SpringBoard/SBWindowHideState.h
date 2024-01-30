@interface SBWindowHideState : NSObject

@property (getter=isHidden) BOOL hidden;
@property double desiredAlpha;

- (id)description;

@end
