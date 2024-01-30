@class NSString, INPerson;

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport>

@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *focusItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithPerson:(id)a0 focusItemIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
