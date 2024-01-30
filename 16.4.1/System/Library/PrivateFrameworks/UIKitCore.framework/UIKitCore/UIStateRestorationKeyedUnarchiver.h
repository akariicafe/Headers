@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
    NSDictionary *_defaultValues;
}

- (id)initForReadingWithData:(id)a0 defaultValues:(id)a1 requiresSecureCoding:(BOOL)a2;
- (id)decodeObjectForKey:(id)a0;
- (id)decodeTopLevelObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;

@end
