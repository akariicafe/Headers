@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject {
    struct _MDPlistContainer { } *_container;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _obj;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSMutableArray *allKeys;
@property (readonly, nonatomic) NSArray *blocklist;

- (struct _MDPlistContainer { } *)container;
- (void)dealloc;
- (id)description;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0 obj:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a1;
- (double)doubleValueForKey:(const char *)a0;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0;
- (BOOL)doesBundleExistInAppAllowList:(id)a0;
- (double)doubleValueForBundle:(id)a0;

@end
