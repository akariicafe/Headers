@interface ECEmailAddressFormatter : NSFormatter {
    long long _style;
}

@property (nonatomic) BOOL shouldIncludeDisplayName;

- (id)stringForObjectValue:(id)a0;
- (id)_stringFromMailboxAddress:(id)a0 includeDisplayName:(BOOL)a1;
- (id)stringFromEmailAddress:(id)a0;
- (id)_stringFromEmailAddress:(id)a0 includeDisplayName:(BOOL)a1;
- (id)_stringFromEmailAddressList:(id)a0 includeDisplayName:(BOOL)a1;
- (id)stringFromEmailAddressConvertible:(id)a0;
- (id)_stringFromEmailAddressConvertible:(id)a0 includeDisplayName:(BOOL)a1;
- (id)initWithStyle:(long long)a0;
- (id)_stringFromGroupEmailAddress:(id)a0;
- (id)init;
- (id)_groupListString:(id)a0;
- (id)emailAddressFromString:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringFromEmailAddressList:(id)a0;

@end
