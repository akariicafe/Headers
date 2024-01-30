@class NSError, NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_white;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

- (id)init;
- (void)setAllowedClassNames:(id)a0;
- (void)dealloc;
- (BOOL)classNameAllowed:(Class)a0;
- (id)allowedClassNames;

@end
