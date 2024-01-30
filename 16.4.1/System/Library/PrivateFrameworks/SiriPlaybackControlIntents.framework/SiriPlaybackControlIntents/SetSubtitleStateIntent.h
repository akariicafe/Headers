@class LanguageOption, NSArray, Device;

@interface SetSubtitleStateIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic) long long enable;
@property (nonatomic, retain) LanguageOption *language;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSArray *deviceQueries;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
