@class NSString, CADisplayLink;

@interface PGDisplayLink : NSObject <BSInvalidatable> {
    CADisplayLink *_link;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) id owner;
@property (readonly, copy, nonatomic) id /* block */ linkFired;
@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
