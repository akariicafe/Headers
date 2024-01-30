@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction

@property (nonatomic) unsigned long long destination;

+ (id)forwardNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)a0;
+ (id)backNavigationAction;

@end
