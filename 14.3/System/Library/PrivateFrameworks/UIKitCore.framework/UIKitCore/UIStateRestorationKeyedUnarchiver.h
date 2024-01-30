@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
    NSDictionary *_defaultValues;
}

- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeObjectForKey:(id)a0;
- (void)dealloc;
- (id)initForReadingWithData:(id)a0 defaultValues:(id)a1 requiresSecureCoding:(BOOL)a2;
- (id)decodeTopLevelObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
