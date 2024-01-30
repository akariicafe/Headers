@class NSArray;

@interface NSSecureUnarchiveFromDataTransformer : NSValueTransformer

@property (class, readonly, copy) NSArray *allowedTopLevelClasses;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)description;

@end
