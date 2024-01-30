@class NSDictionary, NSString;

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary *_allUnsanitizedStringValues;
@property (readonly) NSString *stringValue;
@property (readonly) NSDictionary *allStringValues;
@property (readonly) NSString *defaultStringValue;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;
+ (id)sanitizeString:(id)a0;

- (id)_allUnsanitizedStringValuesWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LocalizedString { unsigned int x0; unsigned int x1; struct Flags { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a3;
- (void)_LSRecord_resolve__allUnsanitizedStringValues;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)stringValueWithPreferredLocalizations:(id)a0;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1;
- (id)description;
- (id)debugDescription;

@end
