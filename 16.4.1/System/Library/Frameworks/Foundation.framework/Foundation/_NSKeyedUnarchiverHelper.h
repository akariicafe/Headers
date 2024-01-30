@class NSError, NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_allowed;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

- (void)setAllowedClassNames:(id)a0;
- (id)allowedClassNames;
- (void)dealloc;
- (BOOL)classNameAllowed:(Class)a0;
- (id)init;

@end
