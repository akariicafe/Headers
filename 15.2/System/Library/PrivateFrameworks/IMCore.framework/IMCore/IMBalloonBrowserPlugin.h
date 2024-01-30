@interface IMBalloonBrowserPlugin : IMBalloonPlugin

- (BOOL)isBetaPlugin;
- (id)version;
- (id)initWithIdentifier:(id)a0 browserDisplayName:(id)a1 browserImageName:(id)a2 browserClass:(Class)a3 presentationContext:(unsigned long long)a4;
- (id)initWithIdentifier:(id)a0 browserDisplayName:(id)a1 browserImageName:(id)a2;

@end
