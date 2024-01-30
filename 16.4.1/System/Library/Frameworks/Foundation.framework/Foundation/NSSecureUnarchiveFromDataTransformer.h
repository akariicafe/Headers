@class NSArray;

@interface NSSecureUnarchiveFromDataTransformer : NSValueTransformer

@property (class, readonly, copy) NSArray *allowedTopLevelClasses;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)description;

@end
