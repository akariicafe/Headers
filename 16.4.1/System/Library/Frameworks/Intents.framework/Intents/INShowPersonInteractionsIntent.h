@class NSString, INPerson;

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport>

@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *focusItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 focusItemIdentifier:(id)a1;

@end
