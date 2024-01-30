@class Application;

@interface CloseAppIntent : INIntent

@property (nonatomic, retain) Application *application;
@property (nonatomic) long long appReference;
@property (nonatomic) long long appNoun;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
