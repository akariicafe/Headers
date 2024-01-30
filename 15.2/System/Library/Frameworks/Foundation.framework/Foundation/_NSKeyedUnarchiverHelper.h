@class NSError, NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_white;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

- (void)setAllowedClassNames:(id)a0;
- (BOOL)classNameAllowed:(Class)a0;
- (id)init;
- (id)allowedClassNames;
- (void)dealloc;

@end
