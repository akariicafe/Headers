@class NSArray;

@interface NSSecureUnarchiveFromDataTransformer : NSValueTransformer

@property (class, readonly, copy) NSArray *allowedTopLevelClasses;

- (id)transformedValue:(id)a0;
- (id)description;
- (id)reverseTransformedValue:(id)a0;

@end
