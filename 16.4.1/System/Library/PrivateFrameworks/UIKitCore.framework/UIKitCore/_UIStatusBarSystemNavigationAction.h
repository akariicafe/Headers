@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction

@property (nonatomic) unsigned long long destination;

+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)a0;
+ (id)forwardNavigationAction;

@end
